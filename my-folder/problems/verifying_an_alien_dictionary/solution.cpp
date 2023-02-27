class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        if(words.size()==1) return true ; 
        unordered_map<char,int> m ; 
        for(int i=0;i<26;i++) {
            m[order[i]] = i ;
        }
        for(int i=0;i<words.size()-1;i++){ 
            for(int j = 0 ;j < words[i].size();j++){
                cout<< m[words[i][j]] << " " <<m[words[i+1][j]] <<endl;
                if(j > words[i+1].size()-1){
                    return false ; 
                }
                else if(m[words[i][j]] < m[words[i+1][j]]){
                    break; 
                }
                else if(m[words[i][j]] > m[words[i+1][j]]){
                    return false; 
                }
            }
        }
        return true;
    }
};