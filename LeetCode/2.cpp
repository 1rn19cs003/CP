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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(n==2)
            cout<<k<<endl;
        else
        {
            long long int dp[k+1];
            memset(dp,-1,k+1);
            long long int ans=0;
            long long int count=0;
            int p=0;
                for (int i = 0;i < k; i++)
                {
                    for(int j=0;j<=i;j++)
                    {
                        ans=pow(n, i) * pow(n, j);
                        dp[p++]=pow(n,i)*pow(n,j);
                    }
                    if(count==k)
                        break;
                }
                cout<<ans<<endl;
        }

    }
}
