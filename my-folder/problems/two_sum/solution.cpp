class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        map<int,int> m ; 
        for(int i=0;i<nums.size();i++){
            m[nums[i]] = i ; 
        }
        for(int i = 0;i<nums.size();i++){
            int x = target - nums[i]; 
            if(m.find(x)!=m.end() && i !=m[x]){
                result.push_back(i) ; 
                result.push_back(m[x]);
                break;  
            }
        }
        return result; 

    }
};