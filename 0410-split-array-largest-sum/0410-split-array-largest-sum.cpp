class Solution {
    
    int countelement(vector<int>& nums, int sum){
        int elements=1;
        int sumElement=0;
        for(int i=0;i<nums.size();i++){
            if(sumElement+nums[i]<=sum)
                sumElement+=nums[i];
            else{
                elements++;
                sumElement=nums[i];
            }
        }
        return elements;
    }   
    
public:
    int splitArray(vector<int>& nums, int k) {
     int low= *max_element(nums.begin(),nums.end());
     int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int elements=countelement(nums,mid);
            if(elements>k)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};