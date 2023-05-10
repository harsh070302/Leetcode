class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>>matrix(n,vector<int>(n));
        int up=0,down=n-1,l=0,r=n-1 , c=1;
        while(c<=n*n){
            for(int j=l;j<=r && c<=n*n;j++)
                matrix[up][j]=c++;
            for(int i=up+1;i<=down-1 && c<n*n;i++)
                matrix[i][r]=c++;
            for(int j=r;j>=l && c<=n*n;j--)
                matrix[down][j]=c++;
            for(int i=down-1;i>=up+1 && c<=n*n;i--)
                matrix[i][l]=c++;
            
            up++,down--,l++,r--;
        }
        return matrix;
    }
};