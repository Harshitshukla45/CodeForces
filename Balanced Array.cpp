#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n;
       cin>>n;
       int a[n];
       for(int j=0;j<n;j++)
       {
           cin>>a[j];
       }
       int x=0,y=0;
       for(int j=0;j<n;j++)
       {
           if(j%2==0 && a[j]%2!=0)
           {
               x++;
           }
           else if(j%2!=0 && a[j]%2==0)
           {
               x--;
               y++;
           }
       }
       if(x==0)
       {
           cout<<y<<"\n";
           continue;
       }
       cout<<-1<<"\n";
   }

    return 0;
}
