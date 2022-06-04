class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<int>> output ; 
        for(int i =0 ; i< matrix[0].size();i++){
            vector<int> v; 
            for(int j =0; j<matrix.size();j++){
                v.push_back(matrix[j][i]); 
            }
            output.push_back(v); 
        }
        return output; 
    }
};