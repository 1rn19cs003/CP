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
        int temp1=sqrt(n/2);
        int temp2=sqrt(n/4);
        if((temp1*temp1*2)==n || (temp2*temp2*4)==n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        

    }
}