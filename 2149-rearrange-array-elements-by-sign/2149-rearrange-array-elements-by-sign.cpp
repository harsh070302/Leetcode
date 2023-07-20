class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int negi=1,posi=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negi]=nums[i];
                negi+=2;
            }
            else{
                ans[posi]=nums[i];
                posi+=2;
            }
        }
        return ans;
    }
};