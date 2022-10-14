#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       ll n,q;
       cin>>n>>q;
       vector<ll>a(n);
       vector<ll>k(q);
       
       for(int j=0;j<n;j++)
       {
           cin>>a[j];
       }
       for(int j=0;j<q;j++)
       {
           cin>>k[j];
       }
       
       vector<ll>x=a;
       vector<ll>y=k;
       
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       
       unordered_map<ll,ll>mp;
       
       ll r=0,s=0;
       while(r<n && s<q)
       {
           if(y[s]<x[r])
           {
               if(r==0)
               {
                  mp[y[s]]=0; 
               }
               else
               {
                   mp[y[s]]=x[r-1];
               }
               s++;
           }
           
           else if(x[r]<=y[s])
           {   
               if(r==n-1)
               {
                   mp[y[s]]=x[n-1];
                   s++;
                   continue;
               }
               r++;
           }
       }
       
       ll max=a[0];
       ll th=0;
       unordered_map<ll,ll>cp;
       for(int j=0;j<n;j++)
       {
           if(a[j]>max)
           {
               cp[max]=th;
               max=a[j];
           }
           th += a[j];
       }
       cp[max]=th;
       
       x.clear();
       for(int j=0;j<q;j++)
       {   
           ll t= mp[k[j]];
           x.push_back(cp[t]);
       }
       for(int j=0;j<q;j++)
       {
           cout<<x[j]<<" ";
       }
       cout<<endl;
       
        
    }

    return 0;
}
