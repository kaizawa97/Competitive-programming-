#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,x;

  i = 1;
  cin >> n;

  while (++i <= n)
  {
      x = i;
    if(x % 3 == 0)
    {
      cout << " " << i;
      continue;
    }

    while(x)
    {
      if(x % 10 == 3)
      {
	      cout << " " << i;
	      break;
      }
      x /= 10;
    }
  }

  cout << endl;
  return 0;

}
