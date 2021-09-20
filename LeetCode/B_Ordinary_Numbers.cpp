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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans=0;
       
            if (n < 10)
                ans = n;
            else if (n <= 100)
            {
                ans = 9 + n / 11;
            }
            else if(n<=1000)
                ans=2*9+n/111;
            else if (n <= 10000)
                ans = 3 * 9 + n / 1111;
            else if (n <= 100000)
                ans = 4 * 9 + n / 11111;
            else if (n <= 1000000)
                ans = 5 * 9 + n / 111111;
            else if (n <= 10000000)
                ans = 6 * 9 + n / 1111111;
            else if (n <= 100000000)
                ans = 7 * 9 + n / 11111111;
            else if (n <= 1000000000)
                ans = 8 * 9 + n / 111111111;
            else if (n <= 1000000000)
                ans = 9 * 9 + n / 111111111;
            cout<<ans<<endl;
    }
}
