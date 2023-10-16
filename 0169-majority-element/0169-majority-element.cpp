class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq ; 
        int maj = nums.size()/2; 
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++; 
        }
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second > maj) return it->first; 
        }
        return 0; 
    }
};