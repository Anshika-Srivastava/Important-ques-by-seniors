//DFS Based Solution
class Solution {
public:
    
    void check(vector<vector<char>>& m,int i,int j,int r,int c){
        if(i<0 || i>=r || j<0 || j>=c || m[i][j]!='1')//Boundary conditions
            return;
        
        m[i][j]='2';
        
        //recursively check in all directions
        check(m,i+1,j,r,c);//Down
        check(m,i-1,j,r,c);//Up
        check(m,i,j+1,r,c);//Right
        check(m,i,j-1,r,c);//Left
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n==0)
            return 0;
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    check(grid,i,j,n,m);
                    ans++;
                }
            }
        }
        return ans;
    }
};
