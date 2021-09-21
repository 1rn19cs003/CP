#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cstring>
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
/*input---------------------
1
abhishek
abhihishek
ANs= 8*/
// int lcs(string &s1,string &s2,int n,int m)
// {
//     if(n==0 || m==0)
//     {
//         return 0;
//     }
//     if(s1[n-1]==s2[m-1])
//         return 1+lcs(s1,s2,n-1,m-1);
//     else
//         return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s1,s2;
//         cin>>s1>>s2;
//         int n=s1.size();
//         int m=s2.size();

//         cout<<lcs(s1,s2,n,m)<<endl;
//     }
// }
// -------------************************* method 2 --memorization
/*
1
rishabh
shubhi
4
*/
const int N = 1e3 + 2;
int dp[N-1][N-1];
int lcs(string s1,string s2,int n,int m)
{
    if(n==0 || m==0)
        return 0;
    if(dp[n][m]!=-1)
        return dp[n][m];
    if (s1[n - 1] == s2[m - 1])
            dp[n][m]= 1+lcs(s1,s2,n-1,m-1);
    else
            dp[n][m]= max(lcs(s1, s2, n, m - 1), lcs(s1, s2, n-1,m));
    return dp[n][m];
}
int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            
            string s1,s2;
            cin>>s1>>s2;
            for (int i = 0; i < s1.size()*s2.size(); i++)
            {
                for (int j = 0; j < s1.size() * s2.size(); j++)
                {
                    dp[i][j] = -1;
                }
            }
            int n=s1.size();
            int m=s2.size();
            cout<<lcs(s1,s2,n,m)<<endl;
        }
}