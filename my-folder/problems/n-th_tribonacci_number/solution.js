/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    let fib = [0,1,1]; 
    if(n===0 || n===1 || n===2){
        return fib[n]; 
    }
    
    for(let i = 3; i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2]+fib[i-3]; 
    }
    return fib[n]; 
};