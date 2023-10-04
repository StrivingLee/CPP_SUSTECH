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
        cout << "create with 0 arguments" << endl;
    }
    Student(const char *init_name, int init_born_year, bool init_ismale) {
        name = new char[1024]{0};
        set_name(init_name);
        born_year = init_born_year;
        male = init_ismale;
        cout << "create with 3 arguments" << endl;
    }
    Student(const char *init_name) :
        born_year(0), male(true) {
        name = new char[1024]{0};
        set_name(init_name);
        cout << "create with 1 argument" << endl;
    }

    ~Student() {
        delete[] name;
        cout << "----- destroy -----" << endl;
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
    {
        Student lee("Lee");
        lee.print_info();
    }

    Student *xiao = new Student("Xiao", 2003, false);
    xiao->print_info();
    delete xiao;

    return 0;
}