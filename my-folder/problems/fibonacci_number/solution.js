/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    let fib =[]; 
    fib[0]=0; 
    fib[1]=1; 
    if(n===1 || n===0){
        return fib[n]; 
    }
    
    for(let i=2;i<=n;i++){
        fib[i]= fib[i-1]+fib[i-2]; 
    }
    return fib[n]; 
};