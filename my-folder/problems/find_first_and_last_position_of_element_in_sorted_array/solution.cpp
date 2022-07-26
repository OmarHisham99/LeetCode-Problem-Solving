class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {        
       auto it = find(nums.begin(),nums.end(),target); 
        if(it==nums.end()){
            return {-1,-1}; 
        }
        vector<int> result; 
        map<int,vector<int>> m ; 
        for(int i=0;i<nums.size();i++){
           m[nums[i]].push_back(i); 
        }
        int res = m[target][0]; 
        result.push_back(res); 
        result.push_back(m[target][m[target].size()-1]); 
        
        return result; 
    }
};