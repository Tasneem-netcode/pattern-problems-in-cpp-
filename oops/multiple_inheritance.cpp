#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
};

class Teacher{
    public:
    string subject;
    double salary;
};

class TA: public Student , public Teacher{
    public:
    string course;
    void incrementSalary(double sal){
        salary += sal;
    }

    void getInfo(){
        cout<< "Name: " << name << endl;
        cout<< "Roll No: " << rollno << endl;
        cout<< "Subject: " << subject << endl;
        cout<< "Salary: " << salary << endl;
        cout<< "Course: " << course << endl;
    }

};
int main(){
    TA ta1;
    ta1.name = "Alice";
    ta1.rollno = 101;
    ta1.subject = "Data Structures";
    ta1.salary = 30000;
    ta1.course = "Computer Science";
    ta1.incrementSalary(5000);
    ta1.getInfo();

    Teacher t1;
    t1.subject = "Mathematics";
    t1.salary = 50000;
    cout<< "Teacher Subject: " << t1.subject << endl;
    cout<< "Teacher Salary: " << t1.salary << endl;
   return 0;
}