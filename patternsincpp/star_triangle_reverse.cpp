#include <iostream>

using namespace std;

int main(){
    int n ;
    cout<<"enter n value ";
    cin>>n;
   
    for (int i = 1; i <= n; i++) //rows 
    {
       
        
        for (int j = 1; j<= n-i; j++)//spaces
        { 
            cout<<"  ";
        }
        for (int j = 1; j<= i; j++)//to print star
        { 
            cout<<"* ";
        }
        cout<<endl;
    }
    
   return 0;
}