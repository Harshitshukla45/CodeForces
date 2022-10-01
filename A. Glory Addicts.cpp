#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(ll j=0;j<n;j++)
        {
            cin>>b[j];
        }
        vector<ll>v1;
        vector<ll>v2;
        
        for(ll j=0;j<n;j++)
        {
            if(a[j]==0)
            {
                v1.push_back(b[j]);
            }
            else if(a[j]==1)
            {
               v2.push_back(b[j]); 
            }
        }
        sort(v1.begin(),v1.end(),greater<ll>());
        sort(v2.begin(),v2.end(),greater<ll>());
        
        ll sum=0;
        if(v1.size()<v2.size())
        {   
            
            for(ll j=0;j<v1.size();j++)
            {
                
                sum += v1[j]*2;
                sum += v2[j]*2;
            }
            for(ll j=v1.size();j<v2.size();j++)
            {
                sum+=v2[j];
            }
            
        }
        else if(v1.size()>v2.size())
        {
            
            for(ll j=0;j<v2.size();j++)
            {
                
                sum += v2[j]*2;
                sum += v1[j]*2;
            }
            for(ll j=v2.size();j<v1.size();j++)
            {
                sum+=v1[j];
            }
        }
        else
        {
            if(v1[v1.size()-1]<v2[v2.size()-1])
            {
                 sum +=v1[v1.size()-1];
                 for(ll j=0;j<v2.size();j++)
                 {
                
                    sum += v2[j]*2;
                    sum += v1[j]*2;
                 }
                 sum -=v1[v1.size()-1]*2;
                 
            }
            else
            {
                sum +=v2[v2.size()-1];
                for(ll j=0;j<v1.size();j++)
                {
                
                   sum += v1[j]*2;
                   sum += v2[j]*2;
                }
                sum -=v2[v2.size()-1]*2;
            }
        }
        
        cout<<sum<<"\n";
        
    }
 
    return 0;
}
