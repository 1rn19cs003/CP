#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <list>
#include <deque>
#include <array>
#include <stack>
#include <forward_list>
#include <queue>
#include <set>
#include <unordered_set>
#include <iterator>
#include <cmath>
#include <ios>
#include <iostream>
#include <istream>
#include <fstream>
#include <cstdio>
using namespace std;
// first print all even numbers and the odd numberz or vice versa
// Logic 1 tle-----------------------------------------------------------***********************************************************************
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int temp = pow(n, 2);
//         int dp[100][100];
//         if (n == 2)
//             cout << "-1" << endl;
//         else
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 for (int j = 1; j <= n; j++)
//                 {
//                     dp[i][j] = -1;
//                 }
//             }

//             int k = 1;
//             int i, j;
//             for (i = 1; i <= n; i++)
//             {
//                 for (j = 1; j <= n; j++)
//                 {
//                     if (k % 2 != 0 && k <= temp && dp[i][j] == -1)
//                     {
//                         dp[i][j] = k;
//                     }
//                     k = k + 2;
//                 }
//             }
//             k = 2;
//             for (i = 1; i <= n; i++)
//             {
//                 for (j = 1; j <= n; j++)
//                 {
//                     if (k % 2 == 0 && k <= temp && dp[i][j] == -1)
//                     {
//                         dp[i][j] = k;
//                         k += 2;
//                     }
//                 }
//             }
//             for (int i = 1; i <= n; i++)
//             {
//                 for (int j = 1; j <= n; j++)
//                 {
//                     cout << dp[i][j] << " ";
//                 }
//                 cout << endl;
//             }
//         }
//     }
// }
// LoGIC 2******************************************************************************88
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
        int temp = pow(n, 2);
        int dp[100][100];
        if (n == 2)
            cout << "-1" << endl;
        else
        {

            int k = 2;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (k > n * n)
                        k = 1;
                    cout << k << " ";
                    k += 2;
                }
                cout << endl;
            }
        }
    }
}