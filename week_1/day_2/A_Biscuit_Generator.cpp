#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int s = 0;
    
    for (int i = 1; i <= t; i++)
    {
        if (i % a == 0)
            s += b;
    }

    cout << s << endl;
}
