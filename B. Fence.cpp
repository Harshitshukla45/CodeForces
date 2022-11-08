#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // cout<<"Hello World";
    ll n,k;
    cin>>n>>k;
    int h[n];
    for(ll i=0;i<n;i++)
    {
        cin>>h[i];
    }
    
    int psum=0;
    for(ll i=0;i<k;i++)
    {
        psum += h[i];
    }
    
    ll ind=0;
    int min=INT_MAX;
    for(ll i=0;i<n;i++)
    {   
        if(psum<min)
        {
            min=psum;
            ind=i;
        }
        if(k>=n)
        {
            break;
        }
        psum -= h[i];
        psum += h[k];
        k++;
    }
    
    cout<<ind+1;
 
    return 0;
}
