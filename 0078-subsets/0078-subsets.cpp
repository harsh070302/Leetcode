class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, vector<int> &ds, vector<int> &nums, int n){
        if(ind==n){
           ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,ds,nums,n);
        ds.pop_back();
        
        solve(ind+1,ds,nums,n);
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
       int n=nums.size();
        vector<int>ds;
        solve(0,ds,nums,n);
        
        return ans;
    }
};