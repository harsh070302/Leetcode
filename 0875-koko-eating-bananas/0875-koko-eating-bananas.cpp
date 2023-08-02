class Solution {
    int findMax(vector<int> &piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++)
            maxi=max(maxi,piles[i]);
        return maxi;
    }
    
    double totalHours(vector<int> &piles, int hr){
        double hour=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
            hour+=ceil((double)piles[i]/(double)hr);
        return hour;
    }
    
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            double hour=totalHours(piles,mid);
            if(hour<=h)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};