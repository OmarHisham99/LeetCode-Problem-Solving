/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    
    return (Math.log2(n)%Math.log2(4)==0) ? true : false ;
};