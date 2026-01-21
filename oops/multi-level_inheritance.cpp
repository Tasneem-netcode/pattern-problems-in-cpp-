#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    public:
    int rollno;

    void getInfo(){
        cout<< "Name: " << name << endl;
        cout<< "Age: " << age << endl;
        cout<< "Roll No: " << rollno << endl;

    }
};

class Grads : public Student{
    public:
    string researchArea;

    void getInfo(){
        Student::getInfo(); // call base class method
        cout<< "Research Area: " << researchArea << endl;

    }
};


int main(){
    Grads g1;
    g1.name = "Bob";
    g1.age = 24;    
    g1.rollno = 501;
    g1.researchArea = "Artificial Intelligence";    
    g1.getInfo();
   return 0;
}