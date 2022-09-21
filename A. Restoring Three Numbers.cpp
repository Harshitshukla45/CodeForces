#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int a=0;
    a=max(a,x1); 
     a=max(a,x2);
      a=max(a,x3);
       a=max(a,x4);
       
       int a1 = a-x1;
       int a2= a-x2;
       int a3= a-x3;
       int a4= a-x4;
       
       if(a1!=0)
       {
           cout<<a1<<" ";
       }
       if(a2!=0)
       {
           cout<<a2<<" ";
       }
       if(a3!=0)
       {
           cout<<a3<<" ";
       }
       if(a4!=0)
       {
           cout<<a4<<" ";
       }

    return 0;
}
