#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n value"; 
    cin>>n;
     for (int i = 1; i <= n; i++)
     {
        for (int j = 1; j <=n; j++)
        {
            /* code */
            cout<<(char)(i+96)<<" ";
        }

        cout<<endl;
        
     }
     
   return 0;
}