class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m ;  
       if(s.size()!=t.size())return false; 
        for(char i: s){
            m[i]++; 
        }
        for(char i :t){
            if(m[i]==0){
                return false;
            }
            else{
                m[i]--; 
            }
        }
        return true; 
    }
};