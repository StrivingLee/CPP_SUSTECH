#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char name[5];
    int born_year;
    bool male;

public:
    Student() {
        name[0] = 0;
        born_year = 0;
        male = false;
    }
    Student(const char *init_name, int init_born_year, bool init_ismale) {
        set_name(init_name);
        born_year = init_born_year;
        male = init_ismale;
    }
    Student(const char *init_name) :
        born_year(0), male(true) {
        set_name(init_name);
    }

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
    Student lee("Lee");
    lee.print_info();

    Student *xiao = new Student("Xiao", 2003, false);
    xiao->print_info();
    delete xiao;

    return 0;
}