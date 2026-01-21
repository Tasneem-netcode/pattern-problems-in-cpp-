#include <iostream>
using namespace std;
class Print{
    public:
    void show(int x){
         cout<< "Base class show method called" << endl;
    }

    void show(char ch){
            cout<< "Base class show method with char called" << endl;
    }

};
int main(){
    Print p;
    p.show(5); // calls show(int)
    p.show('A'); // calls show(char)
   return 0;
}