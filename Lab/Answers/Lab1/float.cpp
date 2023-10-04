// print three float numbers with precision
// Assignment1 P38
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
    double a = 0.1, b = 0.2, c = 0.3;

    cout << fixed << setprecision(2);

    cout << a << endl
         << b << endl
         << c << endl;

    // you can also print with formatted string in C++20
    // cout.unsetf(ios::floatfield); // clean format settings
    // cout << fmt::format("{:0.2f}", a);

    return 0;
}