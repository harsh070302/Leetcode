class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int s=0,sum=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(i==j)
                    s=s+mat[i][j];
                else if(i+j==n-1)
                    sum=sum+mat[i][j];
            }
        return s+sum;
    }
};