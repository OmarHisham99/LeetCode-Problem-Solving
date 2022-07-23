/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function(cost) {
    let dp =[cost[0],cost[1]];  
    let size = cost.length; 
    for(let i=2;i<cost.length;i++){
        dp[i] = cost[i]+Math.min(dp[i-1],dp[i-2]); 
    }
    return Math.min(dp[size-1],dp[size-2]); 
};