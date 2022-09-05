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
        int num=n;
        int count=0;
        vector<int>v;
        while (num != 0) {
           num = num / 10;
           ++count;
        }
        int x=10;
        count--;

        while(1)
        {
            int l=pow(10,count);
            if(n%l==0)
            {
                v.push_back(n);
                break;
            }
            v.push_back(n%x);
            n=n/x;
            n=n*x;
            x=x*10;
        }
        for(int j=0;j<v.size();j++)
        {
            if(v[j]==0)
            {
                v.erase(v.begin()+j);
                j--;
            }
        }
        cout<<v.size()<<"\n";
        
        for(int j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
   
    }

    return 0;
}
