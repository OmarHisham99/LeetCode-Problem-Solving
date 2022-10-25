class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        vector<int> result ; 
        int len = nums.size(); 
         for(int i=0;i<len;i++){
            if(nums[i]==nums[i+1]){
                result.push_back(nums[i]);
                nums.erase(nums.begin()+i); 
                i--; 
                break; 
            }
            
        }
         for(int i=0;i<len;i++){
            if(nums[i]!=i+1){
                result.push_back(i+1); 
                break; 
            }
            
        }
        return result ; 
    }
};