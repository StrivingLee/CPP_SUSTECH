#pragma once

#include <cstring>

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