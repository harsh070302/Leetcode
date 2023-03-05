class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1="";
        
 //       while(k!=1){
        for(int i=0;i<s.size();i++)
        {
           
            if(s[i]!=' '){
                s1+=s[i];
            }
            else if(s[i]==' '){
                 if(k==1)
                break;
                s1+=s[i];
                k--;
            }
        }
 //       }
        return s1;
        
    }
};