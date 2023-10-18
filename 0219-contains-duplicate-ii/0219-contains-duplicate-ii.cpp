class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     unordered_map<int,int> freq; 
     for(int i =0 ; i <nums.size();i++){
         if(!freq.count(nums[i])){
             freq[nums[i]] = i ; 
         }
         else {
             if(i - freq[nums[i]]<=k){
                 return true;
             }else {
                 freq[nums[i]] = i ; 
             }
         }
     }
     return false ;
    }
    
};