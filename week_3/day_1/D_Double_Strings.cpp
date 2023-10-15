#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<string> s;

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            string add = a[j] + a[k];
            s.insert(add);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s.count(a[i]);
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
