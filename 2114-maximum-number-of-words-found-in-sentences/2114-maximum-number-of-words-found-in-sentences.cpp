class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int spaces=0, maxcount=0;
        for(auto a:sentences){
            spaces=count(a.begin(),a.end(),' ');
            if(spaces>maxcount)
                maxcount=spaces;
        }
     return maxcount+1;   
    }
};