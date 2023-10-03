#include "student.hpp"

int main(int argc, char **argv) {
    Student lee;
    lee.set_name("Lee");
    lee.set_born_year(2003);
    lee.set_gender(true);
    lee.print_info();

    return 0;
}