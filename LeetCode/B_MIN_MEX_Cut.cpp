
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool zero=false,one =false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                one =true;
            else    
                zero =true;
        }
        if(!zero)
            cout<<"0"<<endl;
        else if (!one)
            cout<<"1"<<endl;
        else
        {
            int start=-1,end=-1;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0' && start==-1)
                    start=i;
                if(s[i]=='0')
                    end=i;
            }
            bool flag=true;
            for(int i=start;i<=end;i++)
            {
                if(s[i]=='1')
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout<<"1"<<endl;
            else 
                cout << "2" << endl;
        }
    }
}