class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size()-1;
        long s=0;
       for(int i=0;i<k;i++){
             sort(gifts.begin(),gifts.end());  
            gifts[n]=sqrt(gifts[n]);                   
        }
        for(int i=0;i<=n;i++)
            s+=gifts[i];
        return s;
    }
};