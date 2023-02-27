class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxcount=0;
        for(auto a:sentences)
            maxcount=max(maxcount,(int)count(a.begin(),a.end(),' '));
     return maxcount+1;   
    }
};