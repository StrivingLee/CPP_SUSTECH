#include <iostream>
// #define NDEBUG
#include <cassert>

using namespace std;

int main(int argc, char** argv) {
    assert(argc == 2);
    cout << "This is an assert example!" << endl;
    return 0;
}