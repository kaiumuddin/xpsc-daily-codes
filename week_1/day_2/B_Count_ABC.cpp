#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string pat = "ABC";
    int j = 0;
    int ans = 0;

    for (int i = 0; i < s.size();)
    {
        if (s[i] == 'A')
        {
            string r = s.substr(i, 3);
            if (r == pat)
            {
                ans++;
                i += 3;
                continue;
            }
        }
        i++;
    }

    cout << ans << endl;
}
