class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(nums.size() ==1){
            return nums[0]; 
        }
        sort(nums.begin(),nums.end()) ;
        int num = 0 ; 
        for(int i =0;i<nums.size(); i++){ 
            if(i==0 && nums[i]!=nums[i+1]){
                num = nums[i]; 
                break;  
            }
            else if(i== nums.size()-1 && nums[i]!=nums[i-1]){
                num = nums[i]; 
                break; 
            }
            else if(nums[i]!=nums[i+1]&& nums[i] !=nums[i-1]){
                num = nums[i]; 
                break; 
            }
        }
        return num ; 
    }
};