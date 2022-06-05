class Solution {
public:
      int sols ; 
    set<int> col , posDiag , negDiag; 
    void placeQueen(vector<string>& board,int r , int n){
        if(r==n){
            sols++; 
            return ; 
        }
       
        for(int c = 0 ;c<n;c++){
            if(col.find(c)!=col.end() || posDiag.find(r+c)!=posDiag.end() ||                negDiag.find(r-c)!=negDiag.end())
                continue ; 
            
            col.insert(c);
            posDiag.insert(r+c); 
            negDiag.insert(r-c); 
            board[r][c] = 'Q'; 
            placeQueen(board,r+1,n);
            col.erase(c);
            posDiag.erase(r+c); 
            negDiag.erase(r-c); 
            board[r][c] = '.';
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.')); 
        placeQueen(board,0,n); 
        return sols; 
    }
};