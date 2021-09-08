#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int flag[n];
        for (int i = 0; i < n; i++)
            flag[i] = 0;
        long long int temp = 0;
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];
        temp = arr[n - 1];
        for (int j = n - 1; j >= 0; j--)
        {
            if (temp != 0 || arr[j] != 0)
            {
                flag[j] = 1;
                temp = max(temp, arr[j]);
                temp--;
            }
            else
                temp = arr[j];
        }
        for (long long int i = 0; i < n; i++)
            cout << flag[i] << " ";
        cout << endl;
    }
}