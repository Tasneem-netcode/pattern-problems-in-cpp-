#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter array size :";
    cin>>n;

    int arr[100];
    cout<<"Enter elements in array ";
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    for (int  i = n-1; i >=0; i--)
    {
        /* code */
        cout<<" " <<arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    // cout<<" "<<arr[i];
        
    // }
    
    
   return 0;
}