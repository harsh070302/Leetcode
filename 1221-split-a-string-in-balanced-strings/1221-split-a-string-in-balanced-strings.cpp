class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;
        int l=0;
        int bal=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                r++;
            else
                l++;
            if(r==l){
                bal++;
                r=0;
                l=0;
            }
        }
        return bal;
    }
};