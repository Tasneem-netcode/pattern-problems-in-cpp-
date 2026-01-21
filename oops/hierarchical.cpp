#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};
class Student: public Person{
    public:
    int rollno;
};

class Teacher: public Person{
    public:
    string subject;
    double salary;
};


int main(){

    Teacher t1;
    t1.subject = "Mathematics";
    t1.salary = 50000;
    cout<< "Teacher Subject: " << t1.subject << endl;
    cout<< "Teacher Salary: " << t1.salary << endl;
   return 0;
}