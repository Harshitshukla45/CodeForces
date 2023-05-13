#include <bits/stdc++.h>
using namespace std;
long long helper(int i,int k,long long dp[][2005])
{   
    if(k<=1)
    {
        return 1;
    }
    if(dp[i][k]!=-1)
    {
        return dp[i][k];
    }
    int ans=0;
    for(int j=i;j>0;j--)
    {
        if(i%j==0)
        {
            ans += helper(j,k-1,dp);
            ans =ans%1000000007 ;
        }
    }
    return dp[i][k]=ans;
}
int main()
{
    //cout<<"Hello World";
    int n,k;
    cin>>n>>k;
    long long dp[n+1][2005];
    memset(dp,-1,sizeof(dp));
    long long ans=0;
    
    for(int i=n;i>0;i--)
    {
        ans+= helper(i,k,dp);
        ans =ans%1000000007 ;
    }
    cout<<ans;

    return 0;
}
