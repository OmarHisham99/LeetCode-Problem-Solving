class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     unordered_map<int,int> m;
     vector<int> index;
     for (int i = 0; i < nums.size(); i++) {
    
          if (m.find(target - nums[i]) != m.end()) {
               index.push_back(i);
               index.push_back(m[target - nums[i]]);
               return index; 
          }
          else {
               m[nums[i]] = i; 
          }
     }
     return index;
    }
};