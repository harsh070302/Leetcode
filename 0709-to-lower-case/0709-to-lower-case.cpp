class Solution {
public:
    string toLowerCase(string s) {
        string t="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
                t=t+s[i];
            }
            else
                t=t+s[i];
        }
        return t;
    }
};