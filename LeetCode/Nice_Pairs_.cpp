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
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        map<int, int> mp_add;
        map<int, int> mp_sub;
        for (int i = 0; i < n; i++)
        {
            mp_add[-(s[i] - '0') + (i)]++;
            mp_sub[(s[i] - '0') + (i)]++;
        }
        // long long int count = 0;
        // for (auto a : mp_add)
        // {
        //    cout<<a.first<<" "<<a.second<<endl;
        // }
        // for (auto a : mp_sub)
        // {
        //     cout << a.first << " " << a.second << endl;
        // }
        for (auto a : mp_add)
        {
            count = count + a.second * (a.second - 1) / 2;
        }
        for (auto a : mp_sub)
        {
            count = count + a.second * (a.second - 1) / 2;
        }
        cout << count << endl;
    }
}