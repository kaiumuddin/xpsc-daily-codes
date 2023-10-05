#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long cnt = 0;
    while (x <= y)
    {
        if (x <= y)
            cnt++;
        x += x;
    }

    cout << cnt << endl;
}
