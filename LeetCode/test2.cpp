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
void result(string s, int n, map<string, int> &mp)
{
    vector<string> st;

    for (int i = 0; i < (int)s.size(); i++)
    {

        string ans = "";
        for (int j = i; j < (int)s.size(); j++)
        {

            ans += s[j];
            if (ans.size() == n)
            {

                st.push_back(ans);
                break;
            }
        }
    }

    for (auto it : st)
    {
        mp[it]++;
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    result(s, n, mp);
    int mx=-1;
    string ans;
    for (auto it : mp)
    {
        if(it.second>mx)
        {
            mx=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}