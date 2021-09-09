#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int sum=arr[0];
        long long int best=INT_MIN;
        for(long long int i=1;i<n;i++)
        {
            sum=max(sum+arr[i],arr[i]);
            best=max(best,sum);
        }
        cout<<best*k<<endl;
    }
}