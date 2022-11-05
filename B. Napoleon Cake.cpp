#include <bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int t;
  cin >> t;
  while (t)
    {
      ll n;
      cin >> n;
      ll a[n];
      for (ll i = 0; i < n; i++)
	{
	  cin >> a[i];
	}

      vector < ll > v;
      ll cake = a[n - 1];

      for (ll i = n-1; i>=0; i--)
	 {
	      if (cake > 0)
		{
		  v.push_back (1);
		}
	      else
		{
		  v.push_back (0);
		}
	      cake--;
	      cake = max (cake, a[i - 1]);


	 }
	  for(ll i=v.size()-1;i>=0;i--)
     {
         cout<<v[i]<< " ";
     }
     cout<<endl;
	  t--;
	}

      return 0;
    }
