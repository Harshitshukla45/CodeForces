#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
      ll n;
      cin>>n;
      ll a[n];
      int x=2,y=1,sum=0;
      for(ll j=0;j<n;j++)
      {
          if(j<(n/2))
          {
             a[j]=x;
             x+=2;
             sum +=a[j];
             continue;
          }
          else
          { 
              if(j==n-1)
             {
                 a[j]=sum;
                 break;
             }
             a[j]=y;
             y+=2;
             sum -=a[j];
             continue; 
             
          }
      }
      if(sum%2==0)
      {
          cout<<"no"<<"\n";
      }
      else
      {
          cout<<"yes"<<"\n";
          for(ll j=0;j<n;j++)
          {
              cout<<a[j]<<" ";
          }
          cout<<"\n";
      }
   }

    return 0;
}
