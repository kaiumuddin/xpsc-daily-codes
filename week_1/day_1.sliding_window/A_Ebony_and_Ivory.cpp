#include <bits/stdc++.h>
using namespace std;

bool solve(int a, int b, int c, int dp[])
{
    if (c == 0)
        return true;
    if (c < 0)
        return false;

    if (dp[c] != -1)
        return dp[c];

    bool l = solve(a, b, c - a, dp);
    bool r = solve(a, b, c - b, dp);

    return dp[c] = l || r;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int dp[c + 1];
    memset(dp, -1, sizeof dp);

    if (solve(a, b, c, dp))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
