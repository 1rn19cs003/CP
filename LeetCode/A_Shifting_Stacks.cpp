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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {

        long long int n;
        cin >> n;
        long long int flag = 1;
        long long int sum = 0;
        for (long long int i = 1; i <= n; i++)
        {
            long long int num;
            cin >> num;
            sum += num;
            if (sum < i * (i - 1) / 2)
            {
                flag = 0;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}
