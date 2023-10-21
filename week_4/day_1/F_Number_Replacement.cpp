#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    map<int, char> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp.count(a[i]))
        {
            if (mp[a[i]] == s[i])
            {
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            mp[a[i]] = s[i];
        }
    }

    cout << "YES" << endl;
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
