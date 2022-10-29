// 520A. Pangram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        x.push_back(int(s[i]));
    }
    sort(x.begin(), x.end());
    x.erase(unique(x.begin(), x.end()), x.end());
    if (x.size() < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}