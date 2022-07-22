/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    let stairs =[1,2]; 
    if(n===1 || n===2) return stairs[n-1];
    
    for(let i=2;i<n;i++){
        stairs[i]= stairs[i-1]+stairs[i-2]; 
    }
    return stairs[n-1]; 
};