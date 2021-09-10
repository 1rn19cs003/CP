#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    string s3=s1+s2;
    if(s1.size()!=s2.size())
    {
        cout<<"No"<<endl;
    }
    else
    {
        char start=s2[0];
        int end =s1.size()+s2.size()-1;
        int pos=find(s3.begin(),s3.end(),start);
        for (int i = pos; i < (s1.size() + s2.size()); i++)
        {
            if(s3[pos++]==s2[i])
            {

            }
        }
    }
    cout<<s3<<endl;
}