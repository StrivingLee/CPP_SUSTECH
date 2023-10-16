#include <iostream>

using namespace std;

class Person {
public:
    string name;
    Person(string name) : name(name) {};
    virtual void print() const {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
public:
    string id;
    Student(string name, string id) : Person(name), id(id) {};
    void print() const {
        cout << "Name: " << name;
        cout << ".ID: " << name << endl;
    }
};

class PersonInterface {
public:
    string name;
    PersonInterface(string name) : name(name) {}
    virtual void print() = 0; // 纯虚函数，类比Java的接口
};

void printObjectInfo(Person &p) {
    p.print();
}

int main(int argc, char** argv) {
    {
        Student lee("Lee", "21373");
        printObjectInfo(lee);
    }

    {
        Person *p = new Student("Oracle", "21373");
        p->print();
        delete p;
    }

    return 0;
}