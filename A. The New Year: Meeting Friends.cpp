#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int x=min(a,min(b,c));
  int y=max(a,max(b,c));
  int z;
  if(a!=x && a!=y)
  {
      z=a;
  }
  if(b!=x && b!=y)
  {
      z=b;
  }
  if(c!=x && c!=y)
  {
      z=c;
  }
  
  a=abs(z-a);
  b=abs(z-b);
  c=abs(z-c);
  
  cout<<a+b+c;

    return 0;
}
