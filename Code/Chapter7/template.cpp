#include <iostream>
using namespace std;

template<typename T>
T sum(T x, T y) {
    cout << "The input type is " << typeid(T).name() << endl;
    return x + y;
}

// instantiates explicitly
template double sum<double>(double, double);

// specialization for Point + Point operation
struct Point {
    int x;
    int y;
};
template<>
Point sum<Point>(Point pt1, Point pt2) {
    cout << "The input type is " << typeid(pt1).name() << endl;
    Point pt;
    pt.x = pt1.x + pt2.x;
    pt.y = pt1.y + pt2.y;
    return pt;
}


int main(int argc, char *argv[]) {
    // auto val = sum(4.1, 5.2);
    // cout << val << endl;

    // instantiates implicitly
    cout << "sum = " << sum<int>(2.2f, 3.0f) << endl;
    cout << "sum = " << sum(2.2f, 3.0f) << endl;

    Point pt1 {1, 2};
    Point pt2 {2, 3};
    Point pt = sum(pt1, pt2);
    cout << "pt = (" << pt.x << "," << pt.y << ")" << endl;
    return 0;
}