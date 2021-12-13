#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int  n;
    cin>>n;
    int p=0;
    for(int i=2*n+1;i>0;i--)
    {
        for(int k=i+1;k>i;k--)
            cout<<" ";
        for(int j=n-p;j>0;j--)
            cout<<"*"<<" ";
        cout<<endl;
        p++;
    }

}