class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        map<char,int> m, n;
        vector<int> m1,n1;  
        for(int i=0;i<word1.size();i++){
            m[word1[i]]++; 
            n[word2[i]]++; 
        }
        for(int i=0;i<word1.size();i++){
            if(!n[word1[i]])
            return false; 
        }
        for(auto it=m.begin();it!=m.end();it++){
            m1.push_back(it->second);
        } 
        for(auto it=n.begin();it!=n.end();it++){
            n1.push_back(it->second);
        }
        sort(m1.begin(),m1.end()); 
        sort(n1.begin(),n1.end()); 
        for(int i=0;i<m1.size();i++){
            if(m1[i]!=n1[i]){
                return false; 
            }
        }
        return true; 
    }
};