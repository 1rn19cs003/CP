#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, r;
    cin >> l >> r;
    long long int n;
    cout << "YES" << endl;
    n = (r - l + 1) / 2;
    while (n--)
    {
        cout << r-- << " " << r-- << endl;
    }
}