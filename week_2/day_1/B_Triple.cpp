#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> mp(n + 1, 0);
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            mp[x]++;
            if (mp[x] == 3)
            {
                ans = x;
            }
        }

        cout << ans << endl;
    }
}
