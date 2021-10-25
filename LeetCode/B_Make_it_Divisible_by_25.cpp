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
#include <climits>
using namespace std;
long long int get(string str, string find_value)
{
    long long int store_res = 0;
    long long int len_of_ans = str.length();
    while (str.length() > 0 and find_value.length() > 0)
    {
        if (str.back() == find_value.back())
        {
            find_value.pop_back();
        }
        else
        {
            store_res++;
        }
        str.pop_back();
    }
    if (find_value.length() == 0)
        return store_res;
    return len_of_ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>> str;
        if (str.length() < 2)
        {
            cout << str.length() << endl;
        }
        else
        {
            cout << min(
                {get(str, "00"), 
                get(str, "25"), 
                get(str, "50"),
                 get(str, "75")}
                 ) << endl;
        }
    }
}