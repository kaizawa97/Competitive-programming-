#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    int a[1000];

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = n - 1; i > 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << a[0];
    cout << endl;
}
