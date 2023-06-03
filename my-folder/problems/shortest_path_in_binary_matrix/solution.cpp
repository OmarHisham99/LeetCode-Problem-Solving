class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return -1; 
        if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1) return 1 ; 
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid.size(),false)) ; 
        queue<pair<pair<int,int>,int>> que; 
        que.push({{0,0},1}); 

        while(!que.empty()) { 
            pair<int,int> fr = que.front().first ; 
            int x = fr.first ;
            int y = fr.second ;
            int len = que.front().second; 
            que.pop(); 
            vector<pair<int,int>> neighbours = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}}; 
            for(pair<int,int> n : neighbours) {
            int newX = n.first+x ; 
            int newY = n.second+y; 
            if(newX >=0 && newY>=0 && newX<grid.size() && newY<grid.size() && grid[newX][newY]==0 && !visited[newX][newY]){
                que.push({{newX,newY},len+1}); 
                visited[newX][newY]=true; 
                if(newX==grid.size()-1 && newY==grid.size()-1) return len+1;
            }
            }
        }
         return -1; 
    }
};