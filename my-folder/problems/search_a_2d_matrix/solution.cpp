class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false ;
        for(int i = 0 ;i<matrix.size();i++){
            if(target <= matrix[i][matrix[i].size()-1]){
                if(target == matrix[i][matrix[i].size()-1]){
                    return true ;
                }
                else{
            for(int j=0;j<matrix[i].size();j++){
                    
                if(target == matrix[i][j]){
                    found = true; 
                    break ;
                }
                
                      }
                   }
                }
            else 
            {
                continue; 
            }
        }
        return found ; 
    }
};