class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum= 0; 
        int maxi= 0; 
        int i = 0 , j =0 ;
        unordered_set<int> s ;
        while(j<nums.size()){
           while(s.count(nums[j])>0){
               s.erase(nums[i]); 
               sum-=nums[i]; 
               i++; 
           }
            sum+=nums[j]; 
            s.insert(nums[j++]); 
            maxi=max(sum,maxi); 
        }      
        return maxi ; 
    }
};