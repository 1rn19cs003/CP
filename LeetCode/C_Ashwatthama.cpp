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
#include <unordered_map>
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
    int n;
    cin >> n;
    set<long long int> st;
    unordered_map<long long int, long long int> u_mp;
    vector<pair<long long int, long long int>> vect;
    long long int b, d;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> d;
        vect.push_back(make_pair(b, d));
        st.insert(b);
        st.insert(d);
        u_mp[b]++;
        u_mp[d]--;
    }
    long long int count = 0;
    long long int temp = 0, ans = 0, soldier = 0;
    for (auto a : st)
    {
        if (u_mp[a] > 0)
        {
            count = count + u_mp[a];
            temp = a;
        }
        else if (u_mp[a] < 0)
        {
            if (count > ans)
                soldier = temp;
            ans = max(ans, count);
            count = count + u_mp[a];
        }
    }
    ans = max(ans, count);
    cout << soldier << " " << ans << endl;
}