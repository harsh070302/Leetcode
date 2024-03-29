class Solution {
public:
    
    int maxLength=0;
    
    void solve(TreeNode* root,int dir,int currentLen){
        if(!root)
            return;
        maxLength=max(maxLength,currentLen);
        solve(root->left,0,dir?currentLen+1:1);
        solve(root->right,1,dir?1:currentLen+1);
    }
      
    int longestZigZag(TreeNode* root) {
        
    solve(root,0,0);
    solve(root,1,0);
        
        return maxLength;
    }
};