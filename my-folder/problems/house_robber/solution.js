/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    if(nums.length ===1){ return nums[0]; }
    
    let dp = [nums[0],Math.max(nums[0],nums[1])]; 
    let size = nums.length; 
    for(let i =2 ;i<nums.length;i++){
        dp[i] = Math.max(nums[i] + dp[i-2],dp[i-1]); 
    }
    return Math.max(dp[size-1],dp[size-2]); 
};