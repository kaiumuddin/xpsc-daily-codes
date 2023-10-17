#include <bits/stdc++.h>
using namespace std;

string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

void solve()
{
    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != pi[i])
            break;
        sum++;
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
