#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int same = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' && b[i] == 'R')
            {
                same++;
            }
            else if (a[i] == 'G' && b[i] == 'B')
            {
                same++;
            }
            else if (a[i] == 'B' && b[i] == 'G')
            {
                same++;
            }
            else if (a[i] == 'B' && b[i] == 'B')
            {
                same++;
            }
            else if (a[i] == 'G' && b[i] == 'G')
            {
                same++;
            }
        }

        if (same == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
