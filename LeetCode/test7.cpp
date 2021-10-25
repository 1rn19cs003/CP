#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

#define max (10000000 >> 5) + 1
#define GOT(x) (mark[x >> 5] >> (x & 31) & 1)
#define SETTING(x) (mark[x >> 5] |= 1 << (x & 31))
int mark[max];
long long P[1048576];
int Pt = 0;
void sieve()
{
    register int i, j, k;
    SETTING(1);
    int n = 10000000;
    for (i = 2; i <= n; i++)
    {
        if (!GOT(i))
        {
            for (k = n / i, j = i * k; k >= i; k--, j -= i)
                SETTING(j);
            P[Pt++] = i;
        }
    }
}
vector<pair<long long, int>> factor(long long n)
{
    vector<pair<long long, int>> R;

    for (int i = 0, j; i < Pt && P[i] * P[i] <= n; i++)
    {
        if (n % P[i] == 0)
        {
            for (j = 0; n % P[i] == 0; n /= P[i], j++)
                ;
            R.push_back(make_pair(P[i], j));
        }
    }
    if (n == 1)
        R.push_back(make_pair(n, 1));
    return R;
}
int main()
{
    sieve();
    long long n;
    scanf("%lld", &n);

    long long ret = 2;
    while (n % 2 == 0)
        n /= 2;
    vector<pair<long long, int>> f = factor(n);
    for (int i = 0; i < f.size(); i++)
    {
        ret *= f[i].second + 1;
    }
    printf("%lld\n", ret/2);

    return 0;
}