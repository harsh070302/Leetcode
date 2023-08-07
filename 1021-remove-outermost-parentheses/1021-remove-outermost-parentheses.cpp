class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        for(auto i:s){
            if(!st.empty())
                ans+=i;
            if(i=='(')
                st.push(i);
            else{
                st.pop();
                if(st.empty())
                    ans.pop_back();
            }
        }
        return ans;
    }
};