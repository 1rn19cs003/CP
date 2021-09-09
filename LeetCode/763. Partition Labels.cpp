class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        map<char,int>mp;
        for(int i=0;i<26;i++)
        {
            mp.insert(pair<char, int>(97+i, 0));
        }
        vector<int>vect;
        int idx=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=max(mp[s[i]],i);
        }
        int pre=-1;
        int temp=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            temp=max(temp,mp[s[i]]);
            if(temp==i)
            {
                vect.push_back(abs(temp-pre));
                pre=temp;
            }
        }
        return vect;
    }
 };