// 520A. Pangram
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
        cout << "NO" << endl;
    else
    {
        set<char> a;
        for (int i = 0; i < n; i++)
        {
            char temp = tolower(s[i]);
            a.insert(temp);
        }
        if (a.size() == 26)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}