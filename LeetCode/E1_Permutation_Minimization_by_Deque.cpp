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
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        deque<int> dq;
        dq.push_back(arr[0]);
        for(int i = 1;i<n;i++)
        {
            if(dq.front()>=arr[i])
                dq.push_front(arr[i]);
            else
                dq.push_back(arr[i]);
        }
        deque<int>::iterator it;
        for (it = dq.begin(); it != dq.end(); ++it)
            cout << *it<<" ";
        cout << '\n';
    }
}