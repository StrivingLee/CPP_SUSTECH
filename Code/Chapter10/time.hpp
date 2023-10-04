#pragma once
#include <iostream>

class MyTime {
    int hours;
    int minutes;

public:
    MyTime() :
        hours(0), minutes(0) {
        std::cout << "Constructor MyTime()" << std::endl;
    }
    MyTime(int m) :
        hours(0), minutes(m) {
        std::cout << "Constructor MyTime(int)" << std::endl;
        this->hours += this->minutes / 60;
        this->minutes %= 60;
    }
    MyTime(int h, int m) :
        hours(h), minutes(m) {
        std::cout << "Constructor MyTime(int,int)" << std::endl;
    }

    MyTime operator+(const MyTime &t) const {
        MyTime sum;
        sum.minutes = this->minutes + t.minutes;
        sum.hours = this->hours + t.hours;

        sum.hours += sum.minutes / 60;
        sum.minutes %= 60;

        return sum;
    }
    MyTime &operator+=(const MyTime &t) {
        this->minutes += t.minutes;
        this->hours += t.hours;

        this->hours += this->minutes / 60;
        this->minutes %= 60;

        return *this;
    }
    MyTime operator+(int m) const {
        MyTime sum;
        sum.minutes = this->minutes + m;
        sum.hours = this->hours;
        sum.hours += sum.minutes / 60;
        sum.minutes %= 60;
        return sum;
    }
    MyTime &operator+=(int m) {
        this->minutes += m;
        this->hours += this->minutes / 60;
        this->minutes %= 60;
        return *this;
    }
    MyTime operator+(const std::string str) const {
        MyTime sum = *this;
        if (str == "one hour")
            sum.hours = this->hours + 1;
        else
            std::cerr << "Only \"one hour\" is supported." << std::endl;
        return sum;
    }
    // prefix increment
    MyTime &operator++() {
        this->minutes++;
        this->hours += this->minutes / 60;
        this->minutes = this->minutes % 60;
        return *this;
    }
    // postfix increment
    MyTime operator++(int) {
        MyTime old = *this; // keep the old value
        operator++();       // prefix increment
        return old;
    }

    friend std::ostream &operator<<(std::ostream &os, const MyTime &t) {
        std::string hour_str = " hours and ";
        std::string minute_str = " minutes.";
        if (t.hours == 1)
            hour_str = " hour and ";
        if (t.minutes == 1)
            minute_str = " minute.";
        std::string str = std::to_string(t.hours) + hour_str
                          + std::to_string(t.minutes) + minute_str;
        os << str;
        return os;
    }
    friend std::istream &operator>>(std::istream &is, MyTime &t) {
        is >> t.hours >> t.minutes;
        t.hours += t.minutes / 60;
        t.minutes %= 60;
        return is;
    }
};
