// Student.h
#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    int id; // 학번
    string name; // 이름
    string dept; // 학과

public:
    Student(int id, string name, string dept) {
        this->id = id;
        this->name = name;
        this->dept = dept;
    }

    void display() {
        cout << "학번 : " << id << "  " << "이름 : " << name << "  " << "학과 : " << dept << endl;
    }
};
