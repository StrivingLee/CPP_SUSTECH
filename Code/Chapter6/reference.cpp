#include <iostream>

using namespace std;

struct Matrix {
    /* data */
    int rows;
    int cols;
    float *pData;
};

int main(int argc, char **argv) {
    int num = 0;
    int &num_ref = num;

    num_ref = 10;

    cout << num_ref << endl;

    Matrix matA = {3, 4};
    matA.pData = new float[matA.rows * matA.cols]{};

    Matrix &matA_ref = matA;

    Matrix *matA_ptr = &matA;
}