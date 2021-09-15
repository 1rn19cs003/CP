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
        string s;
        cin >> s;
        if (is_sorted(s.begin(), s.end()))
            cout << "YES" << endl;
        else
        {
            bool zero=true,one =true;
            int pos=-1;
            for(int i = s.size()-1;i>0;i--)
            {
                if(s[i]=='0' && s[i-1]=='0')
                {
                    pos=i;
                    zero=false;
                    break;
                }
            }
            if(zero)
                cout<<"YES"<<endl;
            else 
            {
                for(int i = pos;i>=0;i--)
                {
                    if (s[i] == '1' && s[i-1] == '1')
                    {
                        one = false;
                        break;
                    }
                }
               if(one)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
}