#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    int check=v[0].second;
    for(int i=1;i<n;i++)
    {
        if(v[i].second < check)
        {
            cout<<"Happy Alex";
            return 0;
        }
        check=v[i].second;
    }
    cout<<"Poor Alex";
    return 0;
}
