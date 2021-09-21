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
// input---------------------
// 1------t
// 9 ------N
// 10 22 9 32 21 50 52 60 80 
// ANs= 7
const int N=1e5+2,MOD=1e9+7;
int dp[N];
/*
int lis(vector<int> &a, int n)
{
    if(dp[n]!=-1)
        return dp[n];
    dp[n]=1;

    for(int i = 0;i<n;i++)
    {
        if(a[n]>a[i])
            dp[n]=max(dp[n],1+lis(a,i));
    }
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        for(int i = 0;i<N;i++)
        {
            dp[i]=-1;
        }
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<lis(a,n-1)<<endl;
    }
    
}
*/
// Method 2----------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int >a(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>dp(n,1);
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
                ans=max(ans,dp[i]);
            }
        }
        cout<<ans<<endl;
    }
}