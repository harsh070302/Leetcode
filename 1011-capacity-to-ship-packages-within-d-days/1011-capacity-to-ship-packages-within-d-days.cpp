class Solution {
     int findDays(vector<int>& weights, int cap){
         int load=0, days=1;
         for(int i=0;i<weights.size();i++){
             if(load+weights[i]>cap){
                 days++;
                 load=weights[i];
             }
             else
                 load+=weights[i];
         }
         return days;
     }
   
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        
        while(low<=high){
            int mid=(low+high)/2;
            int noOfDays=findDays(weights,mid);
            if(noOfDays<=days)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};