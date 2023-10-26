#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> a, int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (a[mid] == x)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int t = 1;
    while (1)
    {
        int n, q;
        cin >> n >> q;

        if (n == 0 || q == 0)
            break;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        cout << "CASE# " << t++ << ":" << endl;
        while (q--)
        {
            int x;
            cin >> x;
            int ans = bs(a, 0, n, x);

            if (ans == -1)
                cout << x << " not found" << endl;
            else
            {
                cout << x << " found at " << ans + 1 << endl;
            }
        }
    }
}
