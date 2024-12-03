#include "class.h"

void Student::single_or_married() {
    if_single = 1;//u are learning eecs right? dont have expect to get married hahaha
}

Student::Student() : age(0), name(""), gpa(0.0) {}
Student::Student(const std::string& name, int age, double gpa) : age(age), name(name), gpa(gpa) {}

void Student::set_Name(const std::string &name) {
    this->name = name;
}

void Student::set_Age(int age) {
    this->age = age;
}

void Student::set_GPA(double gpa) {
    this->gpa = gpa;
}

std::string Student::get_Name() const {
    return name;
}

int Student::get_Age() const {
    return age;
}

double Student::get_GPA() const {
    return gpa;
}