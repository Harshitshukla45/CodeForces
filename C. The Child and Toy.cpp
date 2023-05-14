#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<pair<int,int>>v1(m);
    for(int i=0;i<m;i++)
    {
        cin>>v1[i].first;
        cin>>v1[i].second;
    }
    long long ans=0;
    for(int i=0;i<m;i++)
    {
        if(v[v1[i].first]<v[v1[i].second])
        {
            ans+=v[v1[i].first];
        }
        else
        {
            ans+=v[v1[i].second];
        }
    }
    cout<<ans;
    

    return 0;
}
