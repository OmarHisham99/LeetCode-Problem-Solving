class Solution {
public:
    bool static cmp(pair<char,int>& A,pair<char,int>& B){
            return A.second < B.second;
    }
    vector<pair<char,int>> sorti(map<char,int> &m){
        vector<pair<char,int>> temp ; 
        for(auto& it :m){
            temp.push_back(it); 
        }
        sort(temp.begin(),temp.end(),cmp); 
        return temp; 
    }
    string frequencySort(string s) {
        string result=""; 
        map<char,int> m ; 
        for(int i=0;i<s.size();i++){
            m[s[i]]++; 
        }
       vector<pair<char,int>> tot = sorti(m); 
       reverse(tot.begin(),tot.end());
        for(auto it :tot){
            for(int i =0 ; i < it.second;i++){
                result+=it.first; 
            }
        }
        
        return result;
    }
};