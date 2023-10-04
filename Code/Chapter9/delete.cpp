#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char *name;
    int born_year;
    bool male;

public:
    Student() {
        name = new char[1024]{0};
        born_year = 0;
        male = false;
        // cout << "create with 0 arguments" << endl;
    }
    Student(const char *init_name, int init_born_year, bool init_ismale) {
        name = new char[1024]{0};
        set_name(init_name);
        born_year = init_born_year;
        male = init_ismale;
        // cout << "create with 3 arguments" << endl;
    }
    Student(const char *init_name) :
        born_year(0), male(true) {
        name = new char[1024]{0};
        set_name(init_name);
        // cout << "create with 1 argument" << endl;
    }

    ~Student() {
        cout << "----- destroy " << name << " -----" << endl;
        delete[] name;
    }

    void set_name(const char *s) {
        strncpy(name, s, sizeof(name));
    }
    void set_born_year(int year) {
        born_year = year;
    }
    void set_gender(bool isMale) {
        male = isMale;
    }
    void print_info();
};

void Student::print_info() {
    cout << "Name: " << name << endl;
    cout << "BirthYear: " << born_year << endl;
    cout << "Gender: " << (male ? "male" : "female") << endl;
}

int main(int argc, char **argv) {
    Student *_class = new Student[3]{
        {"Xiao", 2003, false},
        {"Zhou", 2003, true},
        {"Zhang", 2003, true},
    };

    // _class[1].print_info();
    // delete _class;
    delete[] _class;

    return 0;
}