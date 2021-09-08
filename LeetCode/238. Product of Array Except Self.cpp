class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int sum=1;
        int z=0;
        int prod=1;
        vector<int>vect;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum*nums[i];
            vect.push_back(sum);
        }
        vect[vect.size()-1]=vect[vect.size()-2];
        for(int i=vect.size()-2;i>0;i--)
        {
            prod=prod*nums[i+1];
            vect[i]=prod*vect[i-1];
        }
        vect[0]=prod*nums[1];
        // for(auto x:vect)
        //     cout<<x<<" ";
        // cout<<endl;
        return vect;
    }
};