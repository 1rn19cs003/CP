#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <list>
#include <deque>
#include <array>
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
        int n;
        cin >> n;
        int arr[n];
        int c1 = 0, c2 = 0, c3 = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 3 == 0)
                c1++;
            else if (arr[i] % 3 == 1)
                c2++;
            else if (arr[i] % 3 == 2)
                c3++;
        }
        // cout << c1 << " " << c2 << " " << c3 << endl;
        int ans = 0;
        int b=n/3;
        for (int i = 0; i < 2; i++)
        {
            if(c1>b)
            {
                ans+=c1-b;
                c2+=c1-b;
                c1=b;
            }
            if(c2>b)
            {
                ans+=c2-b;
                c3+=c2-b;
                c2=b;
            }
            if(c3>b)
            {
                ans+=c3-b;
                c1+=c3-b;
                c3=b;
            }
        }
        cout << ans<< endl;
    }
}