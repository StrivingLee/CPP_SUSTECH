#include <iostream>
#include "time.hpp"

using namespace std;

int main() {
    MyTime t1(1, 59);
    MyTime t2 = t1++;
    MyTime t3 = ++t1;
    std::cout << "Please input two integers:" << std::endl;
    std::cin >> t1;
    std::cout << t1 << std::endl;
    t1 += t2;          // operator
    t1.operator+=(t2); // function
    t1 += 30;          // operator
    t1.operator+=(30); // function

    std::cout << "t1 is " << t1 << std::endl;
    std::cout << "t2 is " << t2 << std::endl;
    std::cout << "t3 is " << t3 << std::endl;
    std::cout << "t1 + 1h is " << (t1 + "one hour") << std::endl;

    return 0;
}
