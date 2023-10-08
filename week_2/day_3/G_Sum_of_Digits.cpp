#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n > 9)
    {
        ans++;

        int newN = 0;
        while (n != 0)
        {
            newN += n % 10;
            n = n / 10;
        }
        n = newN;
    }

    cout << ans << endl;
}
