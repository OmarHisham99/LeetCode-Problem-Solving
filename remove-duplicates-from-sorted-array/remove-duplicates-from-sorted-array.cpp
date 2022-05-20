class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v ; 
        map<int,bool> m ; 
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==false){
                m[nums[i]]=true; 
                v.push_back(nums[i]);
            }
        }
    nums = v; 
    return nums.size();
    }
    
};