class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        int missingNumber ; 
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){ missingNumber = i ;
                          break;} 
        }
        
        return missingNumber;
    }
};