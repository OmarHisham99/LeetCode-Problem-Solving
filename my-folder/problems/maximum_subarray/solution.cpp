class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0], curmax=nums[0]; 
        for(int i=1;i<nums.size();i++){
            curmax=max(curmax+nums[i],nums[i]);
            maxi=max(maxi,curmax);
        }
        return maxi ; 
    }
};
/*
[-2,1,-3,4,-1,2,1,-5,4]
curmax =-2 ,maxi = -2 -> 0 
curmax=-1 , maxi = -1 - >1 
curmax = -1 , maxi = -1 ->2 
curmax = 

*/