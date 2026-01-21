#include <iostream>
using namespace std;
//This is an example of encapsulation in C++
//Encapsulation is the concept of wrapping data members and methods together in a single unit to restrict direct access to some of the object's components.
class BankAccount{
    private:
    double balance;
    string accountNumber;

    public:
    string username;
    void setBalance(double bal){
        balance = bal;
    }

    double getBalance(){
        return balance;
    }
};
int main(){
    
   return 0;
}