#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
                count++;
        }
        if (count <= 2 and count > 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            vector<int>vect;
            char dp[n][n];
            for(int i=0;i<n;i++)
            {
                if(s[i]=='2')
                    vect.push_back(i);
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        dp[i][j] = 'X';
                    else
                        dp[i][j] = '.';
                }
            }
            for (int i = 0; i < n; i++)
            {
                    if (s[i] == '1')
                    {
                        for (int j = 0; j < n; j++)
                        {
                            dp[i][j] = '=';
                            dp[j][i] = '=';
                        }
                    }
            }
            for (int i = 0; i <n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        continue;
                    if (dp[i][j] == '.')
                    {
                        dp[i][j] = '=';
                        dp[j][i] = '=';
                    }
                }
                if (i == n - 1 && (dp[i][0]=='.' ||dp[0][i]=='.'))
                {
                    dp[i][0] = '+';
                    dp[0][i] = '-';
                }
                else if ((dp[i][i+1] == '.' || dp[i+1][i] == '.'))
                {
                    dp[i][i+1] = '-';
                    dp[i+1][i] = '+';
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        cout << 'X';
                    else
                        cout << dp[i][j];
                }
                cout << endl;
            }
        }
    }
}