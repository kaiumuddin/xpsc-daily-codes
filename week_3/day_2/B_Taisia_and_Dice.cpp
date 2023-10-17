#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, r;
    cin >> n >> s >> r;

    int num = s / (n - 1);

    int b = r / num;

    for (int i = 0; i < n - 1 - 1; i++)
    {
        cout << b << " ";
    }
    cout << s - r;
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
