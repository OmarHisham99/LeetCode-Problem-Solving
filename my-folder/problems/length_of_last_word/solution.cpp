class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words ; 
        istringstream ss(s);
        string word; 
        while(ss >> word){
            words.push_back(word); 
        }
        int length = words.size()-1;
     
        return words[length].size(); 
    }
};