/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function(cost) {
    let dp =[];  
    
    for(let i=cost.length-1;i>=0;i--){
       if(i===cost.length-1){
           dp[i]= cost[i]+0;
       }
        else if(i===cost.length-2){
            dp[i] = cost[i]+0; 
        }
        else{
            dp[i] = cost[i]+Math.min(dp[i+1],dp[i+2]); 
        }
    }
    return Math.min(dp[0],dp[1]); 
   
};