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
        vector<int> b(n);

        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mini = min(mini, b[i]);
        }

        int mnc = mini;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += b[i] - mnc;
        }

        cout << sum << endl;
    }
}
