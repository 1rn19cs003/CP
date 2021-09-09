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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag=0,i=0;
        for(i=0;i<n;i++)
        {
            if((s[i]=='a'&& s[i+1]=='b') || (s[i]=='b'&& s[i+1]=='a'))
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<i+1<<" "<<i+2<<endl;
        else
            cout<<"-1"<<" "<<"-1"<<endl;

    }
}