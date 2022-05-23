class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v ; 
         for(int i = 0 ;i<matrix.size();i++){
             for(int j =0 ;j<matrix[i].size();j++){
                 if(matrix[i][j]==0){
                     pair<int,int> p = {i,j}; 
                     v.push_back(p); 
                 }
             }
         }
        for(auto p : v) {
            for(int i=0;i<matrix.size();i++){
                matrix[i][p.second] = 0 ; 
            }
            for(int i = 0 ;i<matrix[0].size();i++){
                matrix[p.first][i] = 0 ; 
            }
        }
    }
};