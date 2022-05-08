class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     vector<int> nums2 = nums; 
     int len = nums.size();
     if (len == 1) {
          return ; 
     }
     if (k > len) {
          k %= len; 
     }
     int j = 0;
     for (int i = 0; i < len; i++) {
          if (k + i >= len) {
               nums2[j] = nums[i];
               j++;
          }
          else {
               nums2[i + k] = nums[i]; 
          }
     }
        nums = nums2; 
    }
};