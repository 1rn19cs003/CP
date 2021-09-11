#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, t = 0, m = 0, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                t++;
            else
                m++;
            if (t - m > n / 3 || m > t || m > n / 3)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
