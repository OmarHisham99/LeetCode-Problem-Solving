class Solution {
public:
   
int numMatchingSubseq(string s, vector<string>& words) {
    int count = 0; 
    for(auto word :words){
        int start = 0 ; 
        bool found = true; 
        for(auto c :word){
            int pos = s.find(c,start); 
            if(pos==string::npos){
                found = false; 
                break; 
            }
            start = pos+1; 
        }
        if(found){
            count++; 
        }
    }
    return count;
}
};