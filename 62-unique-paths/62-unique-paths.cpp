class Solution {
public:
    
    int findPath(int m, int n,int endX,int endY,vector<vector<int>>&dp){
        if(m==endX-1 && n==endY-1){
            return 1 ; 
        }
        else if(m>=endX || n>=endY){
            return 0 ; 
        }
        if(dp[m][n]!=-1){
            return dp[m][n]; 
        }
        dp[m][n] = findPath(m+1,n,endX,endY,dp)+findPath(m,n+1,endX,endY,dp); 
        return dp[m][n] ; 
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1)) ; 
        return findPath(0,0,m,n,dp); 
    }
};