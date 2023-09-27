#include <iostream>

using namespace std;

struct Matrix {
    /* data */
};


int main(int argc, char **argv) {
    int num = 0;
    int &num_ref = num;

    num_ref = 10;

    cout << num_ref << endl;
}