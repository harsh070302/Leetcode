class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=nums.size();
        int d=n/3;
        
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        for(auto it:mp)
            if(it.second > d)
                ans.push_back(it.first);
        
        return ans;
    }
};