#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter elements in array ";
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cin>>arr[i];
    }

    int largest = arr[0]; //assume arr[0] is the largest 
    for (int i = 0; i <10; i++)
    {
       if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    cout<<"Largest element is "<<largest<<endl;
    
   return 0;
}