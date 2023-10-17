#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    reverse(a, a + n);

    map<string, int> mp;
    map<char, int> mp0;
    map<char, int> mp1;

    mp[a[0]]++;
    mp0[a[0][0]]++;
    mp1[a[0][1]]++;
    long long sum = 0;

    for (int i = 1; i < n; i++)
    {
        sum += mp0[a[i][0]] + mp1[a[i][1]] - mp[a[i]] * 2;
        mp[a[i]]++;
        mp0[a[i][0]]++;
        mp1[a[i][1]]++;
    }

    cout << sum << endl;
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
