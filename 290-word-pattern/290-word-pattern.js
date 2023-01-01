/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
    const wordsToChar = new Map(); 
    let words = s.split(" "); 
    let usedWords = new Set(words);
    let numberOfChars = new Set(pattern); 
    if(usedWords.size !== numberOfChars.size || words.length !== pattern.length){
        return false; 
    } 
    words.forEach((word,index)=>{
        if(!wordsToChar.has(pattern[index])){
            wordsToChar.set(pattern[index],word);
        } 
    })
  for(let i =0 ;i<pattern.length;i++){
      if(wordsToChar.get(pattern[i])!==words[i]){
          return false;
      }
  }
  return true; 
};