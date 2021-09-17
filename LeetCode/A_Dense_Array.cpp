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
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
            int ans=0;
        for(int i = 0;i<n-1;i++)
        {   
            int mx=max(arr[i],arr[i+1]);
            int mn=min(arr[i],arr[i+1]);
            while(mn*2<mx)
            {
                mn=mn*2;
                ans++;
            }
            // sum=max(ans,sum);
        }
        cout<<ans<<endl;
        // cout<<sum<<endl;
    }
    
}