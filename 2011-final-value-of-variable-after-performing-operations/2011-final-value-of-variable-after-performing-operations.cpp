class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0 ; 
        for(int i=0; i<operations.size();i++){
            for(auto c : operations[i]){
                if(c=='+'){
                    res++; 
                    break; 
                }
                else if(c=='-'){
                    res--;
                    break; 
                }
            }
        }
        return res; 
    }
};