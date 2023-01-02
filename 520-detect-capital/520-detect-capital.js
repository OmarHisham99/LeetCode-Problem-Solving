/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
   let upper = 0 , lower =0;
   let upperBolean = false;
   if(word[0]===word[0].toUpperCase()){
       upperBolean = true; 
   }  
   for(let i = 0 ; i < word.length;i++){
       if(word[i] === word[i].toUpperCase()){
        upper++; 
       }    
       else {
           lower++; 
       }
   }
   if(upper>1 && lower>0 && upperBolean){
       return false ; 
   }else if(!upperBolean && upper>0){
       return false; 
   }
   else {
       return true; 
   }
};