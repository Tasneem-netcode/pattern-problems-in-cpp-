#include <iostream>
using namespace std;

class Person{
    public :
    string name;
    int age;

    Person(string name , int age){
        this->name = name;
        this->age = age;
    }
    // Person(){
    //    cout<< "Person object created"<<endl;
    // }

    ~Person(){
        cout<< "Person object destroyed"<<endl;
    }
};

class Student : public Person{
    public:
    int rollNo;

    Student(string name, int age, int rollNo) : Person(name, age) {
        this->rollNo = rollNo;
        cout<< "Student object created"<<endl;
    }

    // Student(){
    //     cout<< "Student object created"<<endl;
    // }

    void getInfo(){
        cout<< "Name: " << name << endl;
        cout<< "Age: " << age << endl;
        cout<< "Roll No: " << rollNo << endl;
    }

    ~Student(){
        cout<< "Student object destroyed"<<endl;
    }
};

int main(){
    Student s1; //
    s1.name = "Alice";
    s1.age = 20;
    s1.rollNo = 101;

    s1.getInfo();
   return 0;
}