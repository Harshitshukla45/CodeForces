#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int helper(int a[],int n,int i,int j)
{   
    if(i>=n || j>=n || i>j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int ans=0;
    for(int k=0;k<n;k++)
    {
       if(k>=i && k<=j)
       {
           if(a[k]==0)
           {
               ans++;
               continue;
           }
       }
       else if(a[k]==1)
       {
           ans++;
       }
    }
    
    return dp[i][j]=max(ans,max(helper(a,n,i+1,j),helper(a,n,i,j+1)));
}
int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    int ans=helper(a,n,0,0);
    cout<<ans;
    return 0;
}
