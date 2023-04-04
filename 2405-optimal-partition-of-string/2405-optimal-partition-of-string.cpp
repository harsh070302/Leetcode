class Solution {
public:
    int partitionString(string s) {
        int ar[26], c=1;
        
        for(int i:s){
            if(ar[i-'a']==1){
                c++;
                memset(ar,0,sizeof(ar));
            }
            ar[i-'a']=1;
        }
        return c;
    }
};