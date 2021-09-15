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
        long long int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        vector<long long int>vect;
        for(long long int i=0;i<n;i++)
        {
            if ((s1[i] == '0' && s2[i] == '1')|| (s1[i] == '1' && s2[i] == '0'))
                vect.push_back(2);
            else if (s1[i] == '0' && s2[i] == '0')
                vect.push_back(1);
            else if (s1[i] == '1' && s2[i] == '1')
                vect.push_back(0);
        }
        vect.push_back(3);
        int sum=0;
        // for(auto a:vect)
        //     cout<<a<<" ";
        // cout<<endl;
        for(long long int i=0;i<n;i++)
        {
            if((vect[i]==1 && vect[i+1]==0)|| (vect[i]==0 && vect[i+1]==1))
            {
                sum=sum+2;
                i+=1;
            }
            else if(vect[i]==2)
                sum=sum+2;
            else if(vect[i]==1)
                sum=sum+1;
            // cout<<"i="<<i<<" ";
            // cout<<"sum="<<sum<<" ";
        }
        cout<<sum<<endl;
    }
}