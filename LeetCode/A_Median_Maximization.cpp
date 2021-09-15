// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         // cout<<test<<endl;
//         long long int a,b;
//         cin>>a>>b;
//         if(a==1)
//             cout<<b<<endl;
//         else if(b==1)
//             cout<<0<<endl;
//         else  {
//             int var;
//             if(a%2==0)
//             {
//                 var=(b/((a/2)+1));
//             }
//             else
//             {
//                 var=(b/(round(a/(2*1.0))));
//             }
//             cout<<var<<endl;
//         }
//     }
// }

// Method ---2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        if (n == 1)
            cout << s << endl;
        else
        {
            int sub = (n + 1)/2-1;
            int lo = 1;
            int hi=s/(n-sub);
            cout<<hi<<endl;
        }
    }
}