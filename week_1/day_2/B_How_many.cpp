#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;

    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {

            for (int c = 0; c <= s; c++)
            {
                int l = (a + b + c);
                int r = (a * b * c);
                if (l > 100)
                    continue;
                if (r > 10000)
                    continue;

                if (l <= s && r <= t)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
}
