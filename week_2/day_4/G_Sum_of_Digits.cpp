#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int ans = 0;
    while (n.size() > 1)
    {
        ans++;

        int sum = 0;
        for (auto c : n)
        {
            sum += c - '0';
        }
        n = to_string(sum);
    }

    cout << ans << endl;
}
