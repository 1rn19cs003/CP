#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<long long int> vect;
    vect.push_back(3);
    vect.push_back(11);
    vect.push_back(101);
    vect.push_back(1009);
    vect.push_back(10007);
    vect.push_back(100003);
    vect.push_back(1000003);
    vect.push_back(10000019);
    vect.push_back(100030001);
    while (t--)
    {
        
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ans=0,ans1=0,ans2=0;
        long long int temp1=vect[c-1];
        while(true)
        {
            long long int temp2=temp1;
            while(temp2>0)
            {
                temp2=temp2/10;
                ans++;
            }
            if(ans==a)
            {
                ans1=temp1;
                break;
            }
            temp1=temp1*2;
            ans=0;
        }
        temp1=vect[c-1];
        ans=0;
        while (true)
        {
            long long int temp2 = temp1;
            while (temp2 > 0)
            {
                temp2 = temp2 / 10;
                ans++;
            }
            if (ans == b)
            {
                ans2 = temp1;
                break;
            }
            temp1 = temp1 * 3;
            ans=0;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}