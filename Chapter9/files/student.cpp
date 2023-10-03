#include <iostream>
#include "student.hpp"

void Student::set_gender(bool isMale) {
    male = isMale;
}

void Student::print_info() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "BirthYear: " << born_year << std::endl;
    std::cout << "Gender: " << (male ? "male" : "female") << std::endl;
}