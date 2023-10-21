#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl
#define nl "\n";

void solve()
{
    int n;
    char c;
    string s;

    cin >> n >> c >> s;

    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }

    s.append(s);

    vector<int> green;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'g')
        {
            green.push_back(i);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            int ub = upper_bound(green.begin(), green.end(), i) - green.begin();
            ans = max(ans, green[ub] - i);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
