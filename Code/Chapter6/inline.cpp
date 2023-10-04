#include <iostream>
using namespace std;

inline float max_function(float a, float b) {
    if (a > b) return a;
    else return b;
}

#define MAX_MACRO(x,y) (x)>(y) ? (x) : (y)

int main(int argc, char **argv) {
    int num1 = 20;
    int num2 = 30;

    cout << max_function(num1++, num2++) << endl;

    num1 = 20;
    num2 = 30;
    int maxv = MAX_MACRO(num1++, num2++);
    // maxv = (num1++)>(num2++) ? (num1++) : (num2++)
    cout << maxv << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
}