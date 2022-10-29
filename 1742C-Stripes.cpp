// 1742C. Stripes
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[8][8];
        char ans = 'R';
        bool x = false;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            if (s[i][0] == 'R')
            {
                for (int j = 1; j < 8; j++)
                {
                    if (s[i][j - 1] != s[i][j])
                    {
                        x = false;
                        break;
                    }
                    else
                    {
                        x = true;
                        ans = s[i][j];
                    }
                }
            }

            if (x)
                break;
        }
        if (!x)
        {
            for (int j = 7; j >= 0; j--)
            {
                if (s[0][j] == 'B')
                {
                    for (int i = 1; i < 8; i++)
                    {
                        if (s[i - 1][j] != s[i][j])
                        {
                            x = false;
                            break;
                        }
                        else
                        {
                            x = true;
                            ans = s[i][j];
                        }
                    }
                }
                if (x)
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}