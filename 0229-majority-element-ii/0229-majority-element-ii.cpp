class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=INT_MIN , el2=INT_MIN;
        int ct1=0 , ct2=0;
        
        for(int i=0;i<nums.size();i++){
            if(ct1==0 && el2 != nums[i]){
                ct1++;
                el1=nums[i];
            }
            else if(ct2==0 && el1 != nums[i]){
                ct2++;
                el2=nums[i];
            }
            else if(nums[i]==el1)
                ct1++;
            else if(nums[i]==el2)
                ct2++;
            else{
                ct1--;
                ct2--;
            }
        }
        vector<int>ls;
        ct1=0,ct2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1)
                ct1++;
            if(nums[i]==el2)
                ct2++;
        }
        int mini=(int)(nums.size()/3) +1;
        if(ct1>=mini)
            ls.push_back(el1);
        if(ct2>=mini)
            ls.push_back(el2);
        
        return ls;
    }
};