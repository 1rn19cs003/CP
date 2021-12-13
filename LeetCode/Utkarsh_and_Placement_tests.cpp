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
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
using namespace std;
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second);}
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second);}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b);}
string decToBinary(int n)
{
//change single quotes to dounle quote in s=''
    string s =" ";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
// ========================= Start Coding =================//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        string x,y;
        cin>>x>>y;
        if(x==a)
            cout<<x<<endl;
        else if(y==a)
            cout<<y<<endl;
        else if(x==b)
            cout<<x<<endl;
        else if(y==b)
            cout<<y<<endl;
        else if(x==c)
            cout<<x<<endl;
        else    
            cout<<y<<endl;
        
    }
}