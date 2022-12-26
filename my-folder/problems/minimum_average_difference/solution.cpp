class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==1){
            return 0 ; 
        }
       long long sumFirst = 0, min = INT_MAX,sumSecond=0,result = -1;
       long long s = nums.size();  
       for(int num : nums){
        sumFirst+=num; 
       }  
        for(long long i =0; i <nums.size()-1;i++){
            sumSecond+=nums[i];
            long long curr = abs(sumSecond/(i+1) - (sumFirst-sumSecond)/(s-i-1)); 
            if(curr< min){
                min = curr; 
                result= i; 
            }   
        }
        return min > sumFirst/s ? s-1 : result ; 
    }
};