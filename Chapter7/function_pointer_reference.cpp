#include <iostream>
#include <cmath>
using namespace std;

float norm_l1(float x, float y);
float norm_l2(float x, float y);
float (*norm_ptr)(float x, float y);
float (&norm_ref)(float x, float y) = norm_l1;

int main() {
    cout << "L1 norm of (-3, 4) = " << norm_ref(-3.0f, 4.0f) << endl;

    norm_ptr = norm_l1;
    norm_ptr = &norm_l2;
    cout << "L2 norm of (-3, 4) = " << norm_ptr(-3.0f, 4.0f) << endl;
}

float norm_l1(float x, float y) {
    return fabs(x) + fabs(y);
}

float norm_l2(float x, float y) {
    return sqrt(x * x + y * y);
}