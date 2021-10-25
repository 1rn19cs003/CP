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
struct Test
{
    int x, y, z;
};
void bubbleSort(int arr[], int n, vector<Test>& myvec)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // count++;
                swap(arr[j], arr[j + 1]);
                myvec.push_back({j+1,j+2,1});
            }
        }
    }
}
// void printArray(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         cout<<arr[i]<<" ";
// }
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
        vector<Test> myvec;
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        bubbleSort(arr,n,myvec);
        // cout<<"size= "<<myvec.size()<<endl;
        // cout<<"------------- "<<endl;
        int s = myvec.size();
        cout<<s<<endl;
        for (int i = 0; i < s; i++)
        {
            cout << myvec[i].x << " " << myvec[i].y
                 << " " << myvec[i].z << endl;
        }
    }
}