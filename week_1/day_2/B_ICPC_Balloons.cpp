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
        string s;
        cin >> s;
        vector<bool> arr(n, 0);
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[s[i] - 'A'] == 0)
            {
                ans += 2;
            }
            else
            {
                ans++;
            }
            arr[s[i] - 'A'] = 1;
        }
        cout << ans << endl;
    }
}
