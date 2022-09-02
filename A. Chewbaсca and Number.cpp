#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin>>x;
    vector<long long>v;
    int rem;
    long long quot=x;
    while(quot>0)
    {
        rem=quot%10;
        v.push_back(rem);
        quot=quot/10;
    }
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++)
    {   
        if(i == 0 && v[i] == 9){
            continue;
        }
        if((9-v[i])<v[i])
        {
            v[i]=9-v[i];
        }
    }
  
    int i=0;
    quot=0;
    while(i<v.size())
    {   
        quot=quot*10;
        quot=quot+v[i];
        i++;
    }
    cout<<quot;

    return 0;
}
