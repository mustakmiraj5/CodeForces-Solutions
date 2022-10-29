// 1700A. Optimal Path
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long double n, m, sum = 0;
        cin >> n >> m;
        if (n == 1 || m == 1)
        {
            n = max(n, m);
            sum = n * (n + 1) / 2;
            cout << sum << endl;
        }
        else
        {
            sum = m * (m + 1) / 2;
            sum += ((m + m * n) / 2) * n;
            sum -= m;
            std::cout << fixed;
            std::cout << setprecision(0) << sum << endl;
        }
    }
    return 0;
}
