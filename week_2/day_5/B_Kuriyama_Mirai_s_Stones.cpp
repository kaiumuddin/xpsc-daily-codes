#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[n + 1] = {0};
    long long b[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b + 1, b + n + 1);

    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i];
        b[i] = b[i - 1] + b[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
            cout << a[r] - a[l - 1] << endl;
        else
            cout << b[r] - b[l - 1] << endl;
    }
}
