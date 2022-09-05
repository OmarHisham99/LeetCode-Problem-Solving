class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi =-1; 
        for(auto v : sentences){
            int sum = 1 ;
            for(auto c :v){
                if(c==' '){
                    sum++;
                }
            }
            if(sum > maxi)
            {
                maxi = sum ; 
            }
        }
        return maxi; 
    }
};