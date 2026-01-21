#include <iostream>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout << "This is the Parent class" << endl;
    }
    //overridden method using virtual keyword
    virtual void getInfoVirtual(){
        cout << "This is the Parent class virtual method" << endl;
    }
};
class Child : public Parent{
    public:
    void getInfo(){
        cout << "This is the Child class" << endl;
    }
    void getInfoVirtual(){
        cout << "This is the child class virtual method" << endl;
    }
};
int main(){
    // Child c;
    // c.getInfo(); // calls Child's getInfo

    Parent p;
    p.getInfo(); // calls Parent's getInfo
    Child c;
     Parent *ptr = &c; // Parent class pointer pointing to Child class object
    ptr->getInfo(); // calls Parent's getInfo due to static binding
    ptr->getInfoVirtual(); // calls Child's getInfoVirtual due to dynamic binding what is dynamic binding? explain with example: when we use virtual keyword in base class method then at runtime it decides which method to call based on the object type rather than pointer type. this is called dynamic binding or runtime polymorphism.
   return 0;
}