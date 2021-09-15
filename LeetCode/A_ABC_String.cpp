// #include<iostream>
// #include<algorithm>
// #include<map>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         int n=s.size();
//         map<char ,int >mp;
//         char last=s[n-1];
//         char first=s[0];
//         int count_f=0,count_l=0;
//         for(int i=0;i<n;i++)
//         {
//             mp[s[i]]++;
//             if(s[i]==first)
//                 count_f++;
//             if(s[i]==last)
//                 count_l++;
//         }
//         int a=mp['A'];
//         int b=mp['B'];
//         int c=mp['C'];
//         if(s[0]==s[n-1])
//             cout<<"NO"<<endl;
//         else if (((a + b) == c) || ((a + c) == b) || ((b + c) == a))
//         {
//             if(!(count_f==n/2 || count_l==n/2))
//                 cout<<"NO"<<endl;
//             else
//                 cout<<"YES"<<endl;
//         }
//         else
//             cout<<"NO"<<endl;
//     }
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <bits/stdc++.h>

using namespace std;

bool solve()
{
    string s;
    cin >> s;
    vector<int> d(3);
    int x = s[0] - 'A';
    int y = s.back() - 'A';
    if (x == y)
        return false;
    d[x] = 1;
    d[y] = -1;
    if (count(s.begin(), s.end(), 'A' + x) == s.length() / 2)
        d[3 ^ x ^ y] = -1;
    else
        d[3 ^ x ^ y] = 1;
    int bal = 0;
    for (char c : s)
    {
        bal += d[c - 'A'];
        if (bal < 0)
            return false;
    }
    return bal == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << (solve() ? "YES\n" : "NO\n");
    }
}