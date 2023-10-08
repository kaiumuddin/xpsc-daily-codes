#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    for (;;)
    {
        y++;
        string s = to_string(y);
        set<char> st;
        for (auto e : s)
        {
            st.insert(e);
        }

        if (st.size() == 4)
        {
            cout << y << endl;
            break;
        }
    }
}
