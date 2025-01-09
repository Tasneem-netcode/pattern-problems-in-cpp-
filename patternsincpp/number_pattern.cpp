#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter n value ";
    cin>>n ;
    // int m ;
    // cout<<"Enter m value ";
    // cin>>m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
   return 0;
}