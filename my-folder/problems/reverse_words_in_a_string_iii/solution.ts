function reverseWords(s: string): string {
    let result = ''
    let words = s.split(' ')
    for(let i =0; i<words.length;i++){
        let word = words[i].split('')
        let wordString = word.reverse().join('')
        result+= i <words.length-1 ? wordString+' ' : wordString; 
    }
    return result
};