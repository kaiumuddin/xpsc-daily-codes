#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0;
    vector<int> oddv;
    vector<int> evenv;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (a[i] & 1)
        {
            oddv.push_back(a[i]);
        }
        else
        {
            evenv.push_back(a[i]);
        }
    }

    if (oddv.size() & 1)
    {
        sort(oddv.begin(), oddv.end());
        sum -= oddv[0];
    }

    cout << sum << endl;
}
