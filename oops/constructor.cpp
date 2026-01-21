#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties
    private : 
    double salary;

    public:
    //non-parameterized constructor
    Teacher(){
        cout<<"Teacher object created"<<endl;
        dept = "Computer Science"; // default department
    }

    //parameterized constructor
    Teacher(string n, string d, string s , double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    string name;
    string dept;
    string subject;

    //methods:
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter function for private property
    void setSalary(double sal){
        salary = sal;
    }
    //getter function for private property
    double getSalary(){
        return salary;
    }
    void getInfo(){
        cout<< "Name: " << name << endl;
        cout<< "Department: " << dept << endl;
        cout<< "Subject: " << subject << endl;
        cout<< "Salary: " << salary << endl;
    }
};

class Student{
    //properties
    public:
    string name;
    int rollNo;
    string course;
    string college;

    //methods:
    void changeCourse(string newCourse){
        course = newCourse;
    }
};
int main(){
    Teacher t1("John Doe", "Mathematics", "Algebra", 400000);
    // t1.name = "John Doe";
    // t1.dept = "Mathematics";
    // t1.subject = "Algebra";
    // t1.salary = "$50000"; // salary is private, cannot be accessed directly
    // cout << t1.name << " teaches " << t1.subject << " in the " << t1.dept << " department." << endl;


    t1.setSalary(400000);
    cout<< t1.getSalary() << endl  ;
    t1.getInfo();
    Teacher t2("Jane Smith", "Physics", "Quantum Mechanics", 450000);   
    t2.getInfo();
   return 0;
}