class Solution {
public:
    bool backspaceCompare(string s, string t) {
     stack<char> word1,word2; 
     for(int i = 0 ;i < s.size();i++){
         if(s[i]=='#' && !word1.empty()) word1.pop(); 
         else if(s[i]!='#') {
         word1.push(s[i]); 
         cout << "Word1: " << word1.top() <<endl; 
         }
      
     }
     for(int j =0 ; j < t.size();j++){
         if(t[j]=='#' && !word2.empty()) word2.pop();
         else if(t[j]!='#'){
         word2.push(t[j]); 
         cout << "Word2: " << word2.top()<<endl; 
         }    
     }

     if(word1.size()!=word2.size()) return false ;

     while(!word1.empty()){
        //  cout<<"Stack1: "<<word1.top()<<endl;
        //  cout<<"Stack2: "<<word2.top()<<endl; 

         if(word1.top()!=word2.top()) return false; 
         else {
             word1.pop(); 
             word2.pop(); 
         }
     }
     return true; 
    
    }
};