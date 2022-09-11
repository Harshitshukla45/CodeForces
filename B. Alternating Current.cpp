#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
   string s;
   cin>>s;
   stack<char>st;
   for(int i=0;i<s.size();i++)
   {
       char c;
       c=s[i];
       if(!st.empty() && st.top()==c)
       {
           st.pop();
       }
       else
       {
           st.push(c);
       }
   }
   
   if(st.empty())
   {
       cout<<"Yes";
   }
   else
   {
       cout<<"No";
   }
    return 0;
}
