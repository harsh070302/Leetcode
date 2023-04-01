class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int s=0;
        int e=n;
        int m=s + (e-s)/2;
        
        while(s<=e){
        int m=s + (e-s)/2;
        if(nums[m]==target)
            return m;
         if(target>nums[m])
            s=m+1;
        else
            e=m-1;
    
    }
            return -1;
    }
};