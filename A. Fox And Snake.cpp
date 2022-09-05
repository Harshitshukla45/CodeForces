#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int k=1;
   
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(i%2==1)
           {
               cout<<"#";
           }
           else
           {
               if(k%2==0)
               {
                  if(j==1)
                  {
                      cout<<"#";
                      continue;
                  }
                  cout<<".";
                  if(j==m)
                  {
                      k++;
                      break;
                  }
               }
               else
               {
                   if(j==m)
                   {
                       cout<<"#";
                       k++;
                       break;
                   }
                   cout<<".";
               }
               
           }
           
       }
       cout<<"\n";
   }

    return 0;
}
