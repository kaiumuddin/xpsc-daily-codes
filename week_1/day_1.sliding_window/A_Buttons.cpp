#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a + a - 1;
    int y = b + b - 1;
    int xy = a + b;

    cout << max(x, max(y, xy));
}
