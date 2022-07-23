/**
 * @param {number[]} nums
 * @return {number}
 */

var solve = (array)=>{
    let dp =[array[0],Math.max(array[1],array[0])];
    for(let i =2 ; i<array.length;i++){
        dp[i] = Math.max(array[i]+dp[i-2],dp[i-1]); 
    }
    return dp[dp.length-1]; 
}

var rob = function(nums) {
    if(nums.length===1){return nums[0]; }
    if(nums.length==2) {return Math.max(nums[0],nums[1])}
    let dp1 = [...nums];
    dp1.splice(0,1); 
    
    let dp2 =[...nums];
    dp2.splice(dp2.length-1,1)
    
    return Math.max(solve(dp1),solve(dp2)); 
};