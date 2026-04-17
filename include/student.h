#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
    private:
        std::string Name;
        int Age;
        int Score;
    public:
        Student(std::string name, int age, int score);
        void Infor();
};

#endif