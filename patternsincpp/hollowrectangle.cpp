#include <iostream>
using namespace std;

int main(){

   // rectangle star pattern
   // rows -> m ; cols -> 5
    int m ;
    cin>>m;
    int n ;
    cin>>n ;

  
    for (int i = 1; i <=m; i++)//rows 
    {
      for (int j = 1; j <=n; j++) //cols
      {
        if (i ==1 || i==m || j == 1 || j ==n  )
        {
          cout<<"* ";
        }
      else cout<<"  ";

      }
      cout<<endl;
    
     
    }
    
   return 0;
}