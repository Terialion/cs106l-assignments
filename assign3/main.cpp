/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */
#include <iostream>
#include "class.h"

/* #### Please don't change this line! #### */
int run_autograder();

int main() {
  // STUDENT TODO: Construct an instance of your class!
  // 使用默认构造函数
  Student student1;
  std::cout << "Student1: " << student1.get_Name() << ", Age: " << student1.get_Age() << ", GPA: " << student1.get_GPA() << std::endl;
  // 使用自定义构造函数
  Student student2("Alice", 20, 3.8);
  std::cout << "Student2: " << student2.get_Name() << ", Age: " << student2.get_Age() << ", GPA: " << student2.get_GPA() << std::endl;
  // 使用 setter 函数
  student1.set_Name("Bob");
  student1.set_Age(22);
  student1.set_GPA(3.5);
  std::cout << "Student1: " << student1.get_Name() << ", Age: " << student1.get_Age() << ", GPA: " << student1.get_GPA() << std::endl;

  /* #### Please don't change this line! #### */
  return run_autograder();
}

/* #### Please don't change this line! #### */
#include "utils.hpp"