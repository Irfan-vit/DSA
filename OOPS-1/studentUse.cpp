#include <iostream>
using namespace std;
#include "student.cpp"

int main() {
    Student s1;
    Student s2;
    Student s3, s4, s5;

    s1.age = 24;
    s1.rollNumber = 101;

    cout << s1.age << endl;
    cout << s1.rollNumber << endl;

    // dynamic creation of objects
    Student *s6 = new Student;

    // *s6.age = 30;
    // *s6.rollNumber = 102;

    s6 -> age = 23;
    s6 -> rollNumber = 102;

    cout << s6->age << endl;
    cout << s6->rollNumber << endl;

}