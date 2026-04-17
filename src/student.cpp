#include "student.h"

Student::Student(std::string name, int age, int score) {
    Name = name;
    Age = age;
    Score = score;
}

void Student::Infor() {
    std::cout << Name << " " << Age << " " << Score << std::endl;
}