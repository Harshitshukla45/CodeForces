#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int q=0,h=0,f=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==25)
        {
            q++;
        }
        else if(v[i]==50)
        {
            if(q>0)
            {
                q--;
                h++;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            if(h>01 && q>0)
            {
                q--;
                h--;
                f++;
            }
            else if(q>2)
            {
               q -= 3;
               f++;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    
    return 0;
}
