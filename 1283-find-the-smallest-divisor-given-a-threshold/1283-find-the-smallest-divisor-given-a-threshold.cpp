class Solution {
    int sumOfD(vector<int>& nums, int div){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum += ceil((double)nums[i]/(double)div);
        
        return sum;
    }
    
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()>threshold)   return -1;
        int low=1, high=*max_element(nums.begin(),nums.end());

        while(low<=high){
            int mid=(low+high)/2;
            if(sumOfD(nums,mid)<=threshold)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};