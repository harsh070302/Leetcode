class Solution {
private:
void solve(string digits, string output, int ind, vector<string>& ans, string mapping[]){
    if(ind>=digits.length()){
        ans.push_back(output);
        return;
    }
    int n=digits[ind]-'0';
    string val=mapping[n];
    
    for(int i=0;i<val.length();i++){
        output.push_back(val[i]);
        solve(digits,output,ind+1,ans,mapping);
        output.pop_back();
    }
}
public:    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        
        string output="";
        int ind=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,ind,ans,mapping);
        return ans;
    }
};