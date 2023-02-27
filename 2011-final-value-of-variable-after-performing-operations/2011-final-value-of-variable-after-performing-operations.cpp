class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int c=0;
       
        //int n=op.size();
        for(auto x:op){
             string w;
            istringstream ss(x);
            while(ss>>w){
                if(w[1]=='+'){
                    c++;
                }
                else
                    c--;
            }
        }
        return c;
    }
};