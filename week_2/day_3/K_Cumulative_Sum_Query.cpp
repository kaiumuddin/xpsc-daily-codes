#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int s[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        s[i] = s[i - 1] + a[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << s[r + 1] - s[l] << endl;
    }
}
