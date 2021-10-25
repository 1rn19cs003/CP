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
/* input-------
1
5
10 20 30 20 30
ans---=== 18000
 */
/* const int N=102,MOD =1e9+7;
int dp[N][N];
int arr[N];
int mcm(int i,int j)
{
    if(i==j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    dp[i][j]=MOD;
    for(int k=i;k<j;k++)
    {
        dp[i][j]=min(dp[i][j],mcm(i,k)+mcm(k+1,j)+arr[i-1]*arr[k]*arr[j]);
    }
    return dp[i][j];
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
         cin>>arr[i];
        }
        cout<<mcm(1,n-1)<<endl;


    }
} */
// method 2**********************************************
/* input-------
1
5
10 20 30 20 30
ans---=== 18000
 */
const int N = 102, MOD = 1e9 + 7;
int dp[N][N];
int arr[N];
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i=1;i<n;i++)
            dp[i][i]=0;
        for(int l=2;l<n;l++)
        {
            for(int i=1;i<n-l+1;i++)
            {
                int j=i+l-1;
                dp[i][j]=MOD;
                for(int k=i;k<j;k++)
                {
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j]);
                }
            }
        }
        cout<<dp[1][n-1];
    }
}