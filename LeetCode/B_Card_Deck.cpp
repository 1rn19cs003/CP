#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
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
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int >arr;
        vector<int >ans;
        stack<int >st;

        for(int i = 0;i<n;i++)
        {
            int p;
            cin>>p;
            arr.push_back(p);
        }
        // sort(arr.begin(), arr.end() ,greater<int>());
        int max=arr[0];
        // ans.push_back(arr[0]);
        for(int i = 1;i<n;i++)
        {
            if(max>=arr[i])
            {
                st.push(arr[i]);
            }
            else
            {
                while (!st.empty())
                {
                    // cout<<"st="<<st.top()<<" ";
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back(max);
                max=arr[i];
            }

        }
        while (!st.empty())
        {
            // cout << "st=" << st.top() << " ";
            ans.push_back(st.top());
            st.pop();
        }
        ans.push_back(max);
        reverse(ans.begin(),ans.end());
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}