// 1282A. Temporarily unavailable
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, r, len;
        cin >> a >> b >> c >> r;
        if (b > a)
            swap(a, b);
        if (c >= a)
        {
            if (c - r <= b)
            {
                len = 0;
            }
            else if (c - r >= a)
            {
                len = a - b;
            }
            else
            {
                len = c - r - b;
            }
        }
        else if (c <= b)
        {
            if (c + r >= a)
            {
                len = 0;
            }
            else if (c + r <= b)
            {
                len = a - b;
            }
            else
            {
                len = a - (c + r);
            }
        }
        else
        {
            len = a - b;
            if (a - c <= r)
            {
                len -= a - c;
            }
            else
            {
                len -= r;
            }
            if (c - b <= r)
            {
                len -= c - b;
            }
            else
            {
                len -= r;
            }
        }
        cout << len << endl;
    }
    return 0;
}