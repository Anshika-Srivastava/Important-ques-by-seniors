//Memoisation solution
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> t(m+1,vector<int>(n+1,-1));//Table for memoization
        return count(m, n, t);
    }

    int count(int m, int n, vector<vector<int>>& t){
        if(m<1 || n<1) //out of bounds condition
            return 0;

        if(m==1 || n==1) //base condition
            return 1;

        if(t[m][n] != -1) //If corresponding value already exists in the table
            return t[m][n];

        return t[m][n]=count(m-1, n, t) + count(m, n-1, t); //Otherwise recursively call the function
    }
};
 
