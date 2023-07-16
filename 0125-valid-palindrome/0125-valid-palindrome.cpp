class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
                x+= (s[i]+32);
            else if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')
                x+=s[i];
        }
        string str=x;
        reverse(x.begin(),x.end());
        return str==x;      
        
    }
};