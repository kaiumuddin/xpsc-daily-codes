#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<string> st;

    for (int i = 1; i < n; i++)
    {
        st.insert("" + s[i - 1] + s[i]);
    }

    cout << st.size() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
