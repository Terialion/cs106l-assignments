#ifndef CLASS_H
#define CLASS_H

#include <string>

class Student {
    private:
        int age;
        std::string name;
        double gpa;
        bool if_single; // 1: single, 0: married
        void single_or_married();
    public:
        Student();
        Student(const std::string& name, int age, double gpa);

        void set_Name(const std::string& name);
        void set_Age(int age);
        void set_GPA(double gpa);

        std::string get_Name() const;
        int get_Age() const;
        double get_GPA() const;
};

#endif