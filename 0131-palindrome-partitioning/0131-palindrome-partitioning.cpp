class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        fun(0,s,path,ans);
        return ans;
    }
    void fun(int ind,string s,vector<string>& path,vector<vector<string>>& ans){
        if(ind==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();++i){
            if(isPal(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                fun(i+1,s,path,ans);
                path.pop_back();
            }
        }
    }
    bool isPal(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    
};