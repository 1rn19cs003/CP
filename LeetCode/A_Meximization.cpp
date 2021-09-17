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
#include <stack>
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
        int arr[n];
        map<int,int>mp;
        stack<int>st;
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            cout<<i.first<<" " ;
            while(i.second-1!=0)
            {
                st.push(i.first);
                i.second--;
            }
        }
        while (!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}