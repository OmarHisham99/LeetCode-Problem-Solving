class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0; 
        for(int i =0;i<nums.size();i++){
            if(nums[left]==0 && nums[i]!=0){
                swap(nums[left],nums[i]);
                left++; 
            } 
            if(nums[i]==0 && nums[left]!=0){
                left = i; 
            }

        }
    }
};