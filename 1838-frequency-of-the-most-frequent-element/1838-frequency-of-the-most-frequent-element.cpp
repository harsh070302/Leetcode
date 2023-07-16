class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long l=0,total=0,res=1;
        long n=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int r=0;r<n;r++){
            total+=nums[r];
           // long ws=r-l;
            while(nums[r]*(r-l+1)-total>k){
                total-=nums[l++];
               // l++;
            }
            res=max(res,r-l+1);
            //r++;
        }
        return res;
    }
};