#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    //cout<<"Hello World";
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        ll num = sqrt(v[i]);
        if(num*num == v[i])
        {
           if(isprime(num))
           {
               cout<<"YES\n";
               continue;
           }
        }
        cout<<"NO\n";
    }
    
    
   

    return 0;
}
