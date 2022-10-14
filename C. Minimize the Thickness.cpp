#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int j=0;j<n;j++)
        {
           cin>>a[j]; 
        }
        
        int x=-1,sum=0,s2=0,l=0,m=0,n1=100000;
        while(x<n)
        { 
           x++;
           sum += a[x];
           m=x+1;
           for(int j=x+1;j<n;j++)
           {
              s2 += a[j];
              l++;
              if(s2==sum)
              {  
                 if(j!=n-1)
                 {
                     s2=0;
                 }
                 m=max(l,m);
                 l=0;
                 
              }
              
           }
           
           if(m!=0 && s2==sum)
           {   
               n1=min(m,n1);
           }
           m=0;
           s2=0;
           l=0;
           
           
        }
        if(n1==100000)
        {
            cout<<n<<endl;
        }
        else
        cout<<n1<<endl;
        
        
    }
 
    return 0;
}
