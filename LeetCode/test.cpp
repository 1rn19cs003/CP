
#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 6;
    int i = 0, j = 0, s = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout<<"   ";
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << endl;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = i; j < n; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // cout<<endl;
    // for (i = n; i >= 1; i--)
    // {
    //     for (j = i; j <= n; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    return 0;
}
