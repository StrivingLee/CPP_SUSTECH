#include <iostream>

using namespace std;

int foo(int *p) {
    (*p) += 10;
    p = NULL;
    return 0;
}

int main(int argc, char **argv) {
    int num1 = 20;
    int *p = &num1;
    foo(p);
    cout << "*p=" << *p << endl;

    return 0;
}