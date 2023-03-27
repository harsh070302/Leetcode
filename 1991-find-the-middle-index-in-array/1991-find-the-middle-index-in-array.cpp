class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> rsum(n);
        rsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rsum[i]=nums[i]+rsum[i+1];
        }
        // 2 5 4 12 16 
        // 16 14 11 12 4
        for(int it:rsum)cout<<it<<" ";
        cout<<endl;
        int lsum=0;
        for(int i=0;i<n;i++){
            lsum+=nums[i];
            cout<<lsum<<" ";
            if(lsum== rsum[i]) return i;
            
        }
        cout<<endl;
        return -1;
    }
};