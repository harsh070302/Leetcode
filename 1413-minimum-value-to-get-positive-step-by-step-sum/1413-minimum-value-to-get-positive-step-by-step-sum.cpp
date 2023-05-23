class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minsum=0,currsum=0;
        for(auto x:nums){
            currsum+=x;
            if(currsum<minsum)
                minsum=currsum;
        }
        return -minsum +1;
    }
};