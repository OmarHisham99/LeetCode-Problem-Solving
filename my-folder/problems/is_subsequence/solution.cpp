class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0 && t.size()==0){
            return true; 
        }
        int first = 0 ; 
        int i = 0 ; 
        while(i<t.size()){
            if(s[first]==t[i]){
                first++; 
            }
            if(first>=s.size()){
                return true; 
            }
            i++; 
        }
        return false; 
    }
};