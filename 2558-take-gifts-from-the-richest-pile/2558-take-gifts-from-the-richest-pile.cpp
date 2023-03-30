class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size()-1;
        long s=0;
        sort(gifts.begin(),gifts.end());
        while(k--){
            int p=gifts[n];
            p=sqrt(p);
            gifts[n]=p;
            sort(gifts.begin(),gifts.end());          
        }
        for(int i=0;i<=n;i++)
            s+=gifts[i];
        return s;
    }
};