class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = -1; 
        for(auto v : accounts){
            int sum =0 ; 
            for(auto val:v){
               sum+=val ; 
            }
            if(sum>maxi){
                maxi=sum; 
            }
        }
        return maxi;
    }
};