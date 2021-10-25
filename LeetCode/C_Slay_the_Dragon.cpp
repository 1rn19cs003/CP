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
#include <climits>
#include <unordered_set>
#include <iterator>
#include <cmath>
#include <ios>
#include <iostream>
#include <istream>
#include <fstream>
#include <cstdio>
using namespace std;
long long int calc(long long int req, long long int arr[], long long int n)
{
    long long int temp = arr[0];
    long long int ans = arr[0];
    for (long long int i = 0; i < n; i++)
    {
        // cout << abs(arr[i] - req) <<" "<< arr[i] << endl;
        if (temp > abs(arr[i] - req))
        {
            temp = abs(arr[i] - req);
            ans = arr[i];
        }
    }
    return (ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    long long int mx = *max_element(arr, arr + n);
    long long int mn = *min_element(arr, arr + n);
    long long int m;
    cin >> m;
    vector<pair<long long int, long long int>> mp;
    for (long long int j = 0; j < m; j++)
    {
        long long int first, second;
        cin >> first >> second;
        mp.push_back(make_pair(first, second));
    }
    long long int req_first = 0;
    long long int req_sum = 0;
    long long int req_sec = 0, ans = 0;
    for (long long int j = 0; j < m; j++)
    {
        long long int f = mp[j].first;
        long long int s = mp[j].second;
        req_first = calc(f, arr, n);
        f=f-req_first;
        req_sum = sum - req_first;
        if(req_sum<0)
            req_sum=0;
        if (s <= req_sum)
            req_sec = 0;
        else
            req_sec = s - req_sum;
        if (f < 0)
            f= 0;
        long long int total = f + req_sec;
        cout << total << endl;
        // cout << "req_first= " << req_first << " req_sec= " << req_sec  << " mp[j].first= " << mp[j].first<<" req_sum= " <<req_sum<< endl;
    }
}