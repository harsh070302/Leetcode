class Solution {
public:
    int countAsterisks(string s) {
        int b=0,a=0;
        for(int i=0;i<s.size();i++){
            if(b%2==0 && s[i]=='*')
                a++;
            if(s[i]=='|')
                b++;
        }
        return a;
    }
};