#include<bits/stdc++.h>
using namespace std;
static bool cmp(vector<int> &v1, vector<int> &v2)
{
    return v1[1] < v2[1];
}
long long maxTaxiEarnings(int n, vector<vector<int>> &nums)
{
    for (auto &it : nums)
    {
        it[2] += (it[1] - it[0]);
    }
    using ll = long long;
    n = nums.size();
    vector<ll> dp(n + 10, 0);
    sort(nums.begin(), nums.end(), cmp);
    dp[0] = nums[0][2];
    for (int i = 1; i < n; i++)
    {
        int s = nums[i][0];
        int e = nums[i][1];
        ll cost = nums[i][2];
        int l = 0;
        int r = i - 1;
        int index = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid][1] <= s)
            {
                index = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (index != -1)
        {
            cost += dp[index];
        }
        dp[i] = max(dp[i - 1], cost);
    }
    return dp[n - 1];
}
int main()
{
    vector<vector<long long int>>vect;
    long long int n;
    cin>>n;
    long long int k;
    ci>>k;
    for(long long int i=0;i<n;i++)
    {
        vector<int>temp;
        for(long long int i=0;i<k;i++)
        {
            int x;
            cin>>x;
            x.push_back(temp);
        }
        vect.push_back(temp);
    }
    cout << maxTaxiEarnings(int n, vector<vector<int>> &nums)<<endl;
}
