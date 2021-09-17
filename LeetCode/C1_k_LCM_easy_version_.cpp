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
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // cout<<n/2<<" ";
        int temp = n / 2;
        int a = 1, b = 1, c = 1;
        if (n == 3)
            cout << 1 << " " << 1 << " " << 1 << endl;
        else
        {

            if (n %2!= 0)
            {
                a = temp;
                b = temp;
                c = 1;
            }
            else
            {
                if (n % 4 == 0 && temp!=0)
                {
                    // temp=temp-1;
                    a = temp;
                    b = temp/2;
                    c = temp/2;
                }
                else if (n % 2 == 0 && temp != 0)
                {
                    temp=temp-1;
                    a=temp;
                    b=temp;
                    c=n-(2*temp);
                }
            }
            cout << a << " " << b << " " << c << endl;
        }
    }
}