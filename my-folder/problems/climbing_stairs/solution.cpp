class Solution {
public:
    int climbStairs(int n) {
        vector<long long> dp ; 
        dp.push_back(1); 
        dp.push_back(2); 
        if(n==1) return dp[0]; 
        if(n==2) return dp[1]; 
        
        for(int i=2;i<=n;i++){
            dp.push_back(dp[i-1]+dp[i-2]); 
        }
        return dp[n-1]; 
    }
};