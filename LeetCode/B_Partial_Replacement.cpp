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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == '.')
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
        else
        {
            int pos1 = -1;
            int pos2 = -1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '*')
                {
                    pos1 = i;
                    s[i] = 'X';
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == '*' || s[i] == 'X')
                {
                    pos2 = i;
                    s[i] = 'X';
                    break;
                }
            }
            // cout<<pos1<<" "<<pos2<<endl;
            if (pos1 == pos2)
                cout << "1" << endl;
            else
            {
                int count = 2;
                int l = pos1;
                for (int i = pos1; i < pos2; i++)
                {
                    int r = l + k;
                    while (r > l)
                    {
                        if (r > pos2 || s[r] == 'X')
                            break;
                        if (s[r] == '*')
                        {
                            l = r;
                            count++;
                            s[r] = 'X';
                            break;
                        }
                        r--;
                    }
                }
                cout << count << endl;
            }
        }
    }
}