#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    int arr[n];
    vector<int >vect;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mp[arr[i]]==0)
            mp[arr[i]]=i+1;
    }
    while (k--)
    {
        int t;
        cin>>t;
        int ans=mp[t];
        cout<<mp[t]<<" ";
        mp.erase(t);
        for(auto i:mp)
        {
            if(i.second<ans)
            {
                mp[i.first]=i.second+1;
            }
        }
        mp[t]=1;
    }
    cout<<endl;
}