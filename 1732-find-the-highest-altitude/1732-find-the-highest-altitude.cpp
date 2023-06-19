class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxa=0;
        int curra=0;
        
        for(int i=0;i<gain.size();i++){
            curra+=gain[i];
            maxa=max(maxa,curra);
        }
        return maxa;
    }
};