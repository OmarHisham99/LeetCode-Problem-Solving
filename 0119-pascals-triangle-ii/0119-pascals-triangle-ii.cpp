class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp ; 
        dp.push_back({1})  ; 
        dp.push_back({1,1}); 
        for(int i =2; i < rowIndex+1;i++) {
            vector<int> row ;  
            for(int j = 0 ; j <= i ; j++ ){
                if(j==0 || j==i){
                    row.push_back(dp[i-1][0]); 
                }else {
                    row.push_back(dp[i-1][j-1]+dp[i-1][j]); 
                }
            }
            dp.push_back(row); 
        }
        return dp[rowIndex]; 
    }
};