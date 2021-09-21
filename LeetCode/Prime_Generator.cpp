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
#include <cstring>
#include <cstdio>
using namespace std;
void fillPrimes(vector<int> &prime, int high)
{
    bool ck[high + 1];
    memset(ck, true, sizeof(ck));
    ck[1] = false;
    ck[0] = false;
    for (int i = 2; (i * i) <= high; i++)
    {
        if (ck[i] == true)
        {
            for (int j = i * i; j <= high; j = j + i)
            {
                ck[j] = false;
            }
        }
    }
    for (int i = 2; i * i <= high; i++)
    {
        if (ck[i] == true)
        {
            prime.push_back(i);
        }
    }
}
void segmentedSieve(int low, int high)
{
    bool prime[high - low + 1];
    memset(prime, true, sizeof(prime));

    vector<int> chprime;
    fillPrimes(chprime, high);
    for (int i : chprime)
    {
        int lower = (low / i);
        if (lower <= 1)
        {
            lower = i + i;
        }
        else if (low % i)
        {
            lower = (lower * i) + i;
        }
        else
        {
            lower = (lower * i);
        }
        for (int j = lower; j <= high; j = j + i)
        {
            prime[j - low] = false;
        }
    }

    for (int i = low; i <= high; i++)
    {
        if (prime[i - low] == true)
        {
            cout << (i) << endl;
        }
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int start,end;
        cin>>start>>end;
        segmentedSieve(start,end);
        

    }
}