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

        set<string> a;
        set<string> b;
        set<string> c;
        set<string> z;

        int asum = n * 3;
        int bsum = n * 3;
        int csum = n * 3;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a.insert(s);
            z.insert(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            b.insert(s);
            z.insert(s);
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            c.insert(s);
            z.insert(s);
        }

        for (string s : z)
        {
            if (a.count(s) && b.count(s) && c.count(s))
            {
                asum -= 3;
                bsum -= 3;
                csum -= 3;
            }

            else if (a.count(s) && b.count(s))
            {
                asum -= 2;
                bsum -= 2;
            }
            else if (a.count(s) && c.count(s))
            {
                asum -= 2;
                csum -= 2;
            }
            else if (b.count(s) && c.count(s))
            {
                bsum -= 2;
                csum -= 2;
            }
        }

        cout << asum << " " << bsum << " " << csum << endl;
    }
}
