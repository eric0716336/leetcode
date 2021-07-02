//Minimum Path Sum
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int ans[1000][1000];
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(i==0 && j==0)
                {
                    ans[i][j]=grid[i][j];
                }
                else ans[i][j] = grid[i][j]+min((i==0) ? 9999:ans[i-1][j], (j==0) ? 99999:ans[i][j-1]);
            }
        }
        return ans[grid.size()-1][grid[0].size()-1];
    }
};
