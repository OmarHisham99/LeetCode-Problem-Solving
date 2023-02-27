class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s ;
        }
        vector<vector<char>> zigzag(numRows) ;
        string res = "" ;  
        int cnt = 0 ; 
        bool upDown = true; 
        for(int i=0;i<s.size();i++){
            if(cnt ==numRows-1){
                upDown=false;
            } else if (cnt == 0) {
               upDown = true; 
          }
            zigzag[cnt].push_back(s[i]); 
            if(upDown){
                cnt++; 
            }
            else if(!upDown){
                cnt--; 
            }
        }
        for(auto v : zigzag){
            for(auto c : v){
                res+=c; 
            }
        }
    return res ; 
    }
};