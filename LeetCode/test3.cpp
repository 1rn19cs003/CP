// C++ STL program to print all primes
// in a range using Sieve of Eratosthenes
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
typedef unsigned long long int ulli;
vector<ulli> sieve(ulli n)
{
    vector<bool> prime(n + 1, true);

    prime[0] = false;
    prime[1] = false;
    int m = sqrt(n);

    for (ulli p = 2; p <= m; p++)
    {
        if (prime[p])
        {
            // Update all multiples of p
            for (ulli i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    vector<ulli> ans;
    for (int i = 0; i < n; i++)
        if (prime[i])
            ans.push_back(i);
    return ans;
}
bool isZero(ulli i)
{
    return i == 0;
}

vector<ulli> sieveRange(ulli start, ulli end)
{
    // find primes from [0..start] range
    vector<ulli> s1 = sieve(start);

    // find primes from [0..end] range
    vector<ulli> s2 = sieve(end);

    vector<ulli> ans(end - start);

    // find set difference of two vectors and
    // push result in vector ans
    // O(2*(m+n)-1)
    set_difference(s2.begin(), s2.end(), s1.begin(),
                   s2.end(), ans.begin());

    // remove extra zeros if any. O(n)
    vector<ulli>::iterator itr =
        remove_if(ans.begin(), ans.end(), isZero);

    // resize it. // O(n)
    ans.resize(itr - ans.begin());

    return ans;
}

int main(void)
{
    ulli start = 1;
    ulli end = 100;
    vector<ulli> ans = sieveRange(start, end);
    for (auto i : ans)
        cout << i << ' ';
    return 0;
}
