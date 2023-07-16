class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long l=0,r=0,total=0,res=0;
        long n=nums.size();
        
        sort(nums.begin(),nums.end());
        while(r<n){
            total+=nums[r];
           // long ws=r-l;
            while(nums[r]*(r-l+1)-total>k){
                total-=nums[l++];
               // l++;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};