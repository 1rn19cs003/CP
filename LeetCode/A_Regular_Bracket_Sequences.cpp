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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s1='(';
        char s2=')';
        int p=n;
        for(int i=1;i<=n;i++)
        {
            p=(n-i);
            while ((p))
            {
                cout << s1 << s2;
                p--;
            }
            for(int k=0;k<(i);k++)
            {
                cout<<s1;
            }
            for (int k = 0; k < (i); k++)
            {
                cout << s2;
            }
            cout<<endl;
        }
    }
}