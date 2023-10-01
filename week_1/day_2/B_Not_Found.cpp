#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<bool> m(26, false);

    for (char ch : s)
    {
        m[ch - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (m[i] == false)
        {
            int ans = 'a' + i;
            cout << (char)ans << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}
