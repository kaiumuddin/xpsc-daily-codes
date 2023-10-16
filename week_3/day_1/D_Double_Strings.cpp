#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a[n];
    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 1; j < a[i].length(); j++)
        {
            string pref = a[i].substr(0, j);
            string suff = a[i].substr(j, a[i].length() - j);

            if (mp[pref] && mp[suff])
                ok = true;
        }
        cout << ok;
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
