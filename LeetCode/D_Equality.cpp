#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n], d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i] >> d[i];
    }

    map<int, int> by, dy;
    for (int i = 0; i < n; i++)
    {
        by[b[i]]++;
        dy[d[i]]++;
    }
    vector<pair<int, int>> b1, d1;
    for (auto i : by)
    {
        b1.push_back(make_pair(i.first, i.second));
    }
    for (auto i : dy)
    {
        d1.push_back(make_pair(i.first, i.second));
    }

    int k = *max_element(d, d + n);
    int alive[k + 1] = {0};
    int p = 0, q = 0;
    int ct = 0;
    int prev = 0;
    for (int i = 1; i <= k; i++)
    {
        if (p < b1.size() && b1[p].first == i)
        {
            ct += b1[p].second;
            alive[i] += ct;
            p++;
            prev = alive[i];
        }
        else
            alive[i] = prev;
    }
    ct = 0;
    prev = -1;
    for (int i = 1; i <= k; i++)
    {
        if (q < d1.size() && d1[q].first == i)
        {
            ct += d1[q].second;
            alive[i] -= ct;
            q--;
            prev = alive[i];
        }
        if (prev != -1)
            alive[i] = prev;
    }
    int mx = INT_MIN, y;
    for (int i = 1; i <= k; i++)
    {
        if (mx < alive[i])
        {
            mx = alive[i];
            y = i;
        }
    }

    cout << y << " " << mx << endl;
}