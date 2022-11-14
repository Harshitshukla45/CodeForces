#include <bits/stdc++.h>

using namespace std;
int memoization(int n,int a,int b,int c,vector<int>&dp){
    if(n == 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int op1=-1e9,op2 = -1e9,op3 =-1e9;
    if(n >= a){
        op1 = 1 + memoization(n-a,a,b,c,dp);
    }
    if(n >= b){
        op2 = 1 + memoization(n-b,a,b,c,dp);
    }
    if(n >= c){
        op3 = 1 + memoization(n-c,a,b,c,dp);
    }
    return dp[n] = max(op1,max(op2,op3));
}
int main()
{
    
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int>dp(n+1,-1);
    int res = memoization(n,a,b,c,dp);
    cout << res;
    return 0;
}
