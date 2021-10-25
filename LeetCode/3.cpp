#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cstring>
#include <unordered_map>
#include <list>
#include <deque>
#include <array>
#include <stack>
#include <forward_list>
#include <queue>
#include <set>
#include <unordered_set>
#include <iterator>
#include <cmath>
#include <ios>
#include <iostream>
#include <istream>
#include <fstream>
#include <cstdio>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char a;
        string s;
        cin>>n;
        cin>>a;
        cin>>s;
        int pos_f=-1,pos_s=-1;
        for(int i=0;i<n;i+=2)
        {
            if(s[i]!=a && pos_f==-1)
                pos_f=i;
        }
        for (int i = 1; i < n; i+=2)
        {
            if (s[i] != a && pos_s == -1)
            {
               pos_s = i;
            }
        }
        // cout<<pos_f<<" "<<pos_s<<endl;
        if(pos_f==-1 && pos_s==-1)
            cout<<"0"<<endl;
        else if(pos_f!=-1 && pos_s==-1)
            cout<<"1"<<endl<<pos_f+1<<endl;
        else if (pos_f != -1 && pos_s == -1)
            cout << "1" << endl << pos_s+1 << endl;
        else 
            cout<<"2"<<endl<<min(pos_f,pos_s)+1<<" "<<max(pos_s,pos_f)+1<<endl;
    }
}