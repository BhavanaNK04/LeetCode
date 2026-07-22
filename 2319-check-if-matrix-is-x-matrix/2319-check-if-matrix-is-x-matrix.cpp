class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        bool ans=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(i==j || j==n-i-1)
                {
                    if(grid[i][j]==0)
                    {
                        ans=false;
                    }
                }
                else
                {
                    if(grid[i][j]!=0)
                    {
                        ans=false;
                    }
                }
            }
        }
        return ans;
    }
};