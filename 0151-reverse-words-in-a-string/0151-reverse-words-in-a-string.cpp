class Solution {
public:
    string reverseWords(string s) {
     vector<string> result ; 
     string res = ""; 
     for(int i = 0 ; i < s.size();i++) { 
        if(s[i]!=' '){
            res+=s[i]; 
        }
       if(s[i] == ' ' && res!="" || i ==s.size()-1 && res!="") { 
            result.push_back(res); 
            res="";
        }
        
     }
     res = ""; 
     for(int i = result.size()-1;i>=0;i--){
        res+=result[i];
        if(i!=0){
            res+=' ';
        }
     }
     return res;
    }
};