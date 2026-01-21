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

    //copy constructor
    Teacher(Teacher &Orgobj){

        cout<< "I am custom copy constructor" << endl;
        this->name = Orgobj.name;
        this->dept = Orgobj.dept;   
        this->subject = Orgobj.subject;
        this->salary = Orgobj.salary;

    }

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


int main(){
    Teacher t1("John Doe", "Mathematics", "Algebra", 400000);


    t1.setSalary(400000);
    cout<< t1.getSalary() << endl  ;
    t1.getInfo();

    // Teacher t2(t1); // Copy constructor
    Teacher t2(t1); // custom Copy constructor
    t2.getInfo();
   return 0;
}