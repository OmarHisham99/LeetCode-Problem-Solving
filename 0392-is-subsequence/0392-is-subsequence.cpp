class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true ;
    int start = 0 ; 
    for(int i = 0 ; i < t.size();i++){
        if(s[start]==t[i]){
            start++ ; 
        }
     }
     return start >= s.size() ; 
    }
};