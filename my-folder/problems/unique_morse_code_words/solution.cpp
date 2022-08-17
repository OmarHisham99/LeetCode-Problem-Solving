class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         map<char,string> m ;
        map<string,int> result ;  
        vector<string> arr {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ; 
    char alpha ='a'; 
    for(int i =0;i<26;i++){
        m[alpha] = arr[i];  
        alpha++; 
    }
    
    for(auto word : words){
        string s = ""; 
        for(int i =0;i<word.size();i++){
            s+=m[word[i]]; 
        }
        result[s]++;  
    }
    
    return result.size();  
    }
};