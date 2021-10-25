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
int check(long long int arr[],long long int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=1)
            return i;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,k;
        cin>>n>>m>>k;
        long long int arr[n];
        long long int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                count++;
        }
        int status=check(arr,n);
        if(status==-1 || count==n)
            cout<<"100"<<endl;
        else if(status>=m)
            cout<<k<<endl;
        else 
            cout<<"0"<<endl;


    }
}