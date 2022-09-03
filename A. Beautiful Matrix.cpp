#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n=5;
   int x,y;
 
  int a[n][n];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
          cin>>a[i][j];
          if(a[i][j]==1)
           {
               x=i;
               y=j;
               break;
           }
       }
   }
  
   x=abs(2-x);
   y=abs(2-y);
   
   cout<<x+y;
   
    return 0;
}
