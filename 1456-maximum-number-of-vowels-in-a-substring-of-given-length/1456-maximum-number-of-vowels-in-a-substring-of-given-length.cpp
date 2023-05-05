class Solution {
public:
    int isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return 1;
        return 0;
    }
    
     int maxVowels(string s, int k) {
        int curr=0,maxx=0;
         
         for(int i=0;i<s.size();i++){
             curr+=isVowel(s[i]);
             if(i>=k)
                 curr-=isVowel(s[i-k]);
             maxx=max(curr,maxx);
         }
         return maxx;
     }
};