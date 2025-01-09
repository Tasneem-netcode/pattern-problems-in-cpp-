//Write a program to print the Fibonacci series up to a speci
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n ;

    int firstterm = 0 , secondterm = 1 ;
    for (int i = 1; i < n ; i++)
    {
        /* code */
        cout<<firstterm <<" ";
        int nextterm = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = nextterm;

    }
    
   return 0;
}