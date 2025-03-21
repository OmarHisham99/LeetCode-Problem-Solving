class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }
        int start = 0;
        for (int end = 0; end < nums.size(); end++) {
           if(nums[end]!=0){
            nums[start]= nums[end];
            start++; 
           }
        } 
        while(start < nums.size()){
            nums[start] = 0 ; 
            start++; 
        }
        return nums;
    }
};