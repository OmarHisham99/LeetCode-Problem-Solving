class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> dp ; 
        dp.push_back(nums[0]); 
        for(int i= 1 ;i<nums.size();i++) {
            dp.push_back(nums[i]+dp[i-1]); 
        }
        
        return dp; 
    }
};