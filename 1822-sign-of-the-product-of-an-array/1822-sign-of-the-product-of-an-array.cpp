class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
        // if(nums[i]>0)
        //     p= 1;
         if(nums[i]<0)
            p= -p;
        else if(nums[i]==0){
            p= 0;
            break;
        }
        }
        return p;
    }
};