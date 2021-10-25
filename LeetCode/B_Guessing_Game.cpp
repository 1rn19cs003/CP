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
int check(long long int arr[],long long int n,long long int ans)
{
    for(int i=0;i<n;i++)
    {
        if(ans%arr[i]!=0)
            return -1;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        sort(arr,arr+n);
        long long int mn = *min_element(arr, arr + n);
        long long int mx = *max_element(arr, arr + n);
        long long ans=mn * mx;
        int flag=0;
        for (long long int i = 0; i < n; i++)
        {
            if (ans % arr[i] != 0)
            {
                flag=1;
                break;
            }
        }
        for(long long int i=2;i<=sqrt(ans);i++)
        {
            if((ans%i)==0)
            {
                if(i*i==ans)
                    count++;
                else
                    count=count+2;
            }
        }
        if(flag==0 && count==n)
        {
            cout<<ans<<endl;
        }
        else    
            cout<<"-1"<<endl;
    }
}