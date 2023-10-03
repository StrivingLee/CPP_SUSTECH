#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char name[4];
    int born_year;
    bool male;

public:
    void set_name(const char *s) {
        strncpy(name, s, sizeof(name));
    }
    void set_born_year(int year) {
        born_year = year;
    }
    void set_gender(bool isMale);
    void print_info();
};

inline void Student::set_gender(bool isMale) {
    male = isMale;
}

void Student::print_info() {
    cout << "Name: " << name << endl;
    cout << "BirthYear: " << born_year << endl;
    cout << "Gender: " << (male ? "male" : "female") << endl;
}

int main(int argc, char **argv) {
    Student lee;
    lee.set_name("Lee");
    lee.set_born_year(2003);
    lee.set_gender(true);
    lee.print_info();

    return 0;
}