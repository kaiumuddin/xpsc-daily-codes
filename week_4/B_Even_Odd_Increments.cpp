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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    int en = 0;
    int on = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];

        if (v[i] & 1)
            on++;
        else
            en++;
    }

    while (q--)
    {
        int t, xj;
        cin >> t >> xj;

        if (t == 0)
        {
            if (xj % 2 == 0)
            {
                sum += en * xj;
            }
            else
            {
                sum += en * xj;
                on += en;
                en = 0;
            }
        }
        else if (t == 1)
        {
            if (xj % 2 == 0)
            {
                sum += on * xj;
            }
            else
            {
                sum += on * xj;
                en += on;
                on = 0;
            }
        }

        cout << sum << endl;
    }
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
