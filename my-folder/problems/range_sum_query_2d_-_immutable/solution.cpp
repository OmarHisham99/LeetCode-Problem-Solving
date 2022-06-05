class NumMatrix {
public:
    vector<vector<int>> m ; 
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            vector<int> v ;
            v.push_back(matrix[i][0]); 
            for(int j=1;j<matrix[i].size();j++){
                v.push_back(v[j-1]+matrix[i][j]); 
            }
            m.push_back(v); 
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int sum =0 ,mini =0 ; 
        for(int i= row1; i<=row2;i++){
            sum+=m[i][col2];
            if(col1>0){
                mini+=m[i][col1-1]; 
            }
        }
        return sum -mini; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */