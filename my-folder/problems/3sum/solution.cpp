class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for (int i =0 ; i <nums.size();i++){ 
            if(i > 0 && nums[i]==nums[i-1]) continue ; 
            int left = i +1 ; 
            int right = nums.size()-1 ; 
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right]; 
                if(sum == 0){
                    vector<int> vec = {nums[i],nums[left],nums[right]}; 
                    v.push_back(vec); 
                    while(left<right && nums[left] == vec[1]) left++ ; 
                    while(left<right && nums[right] == vec[2]) right--; 
                }
                else if(sum > 0 ) right-- ; 
                else left++; 
            }
        }
        return v ; 
        
    }
    
};