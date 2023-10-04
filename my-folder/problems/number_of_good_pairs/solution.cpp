class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> freq ; 
        int res = 0 ; 
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        map<int,int>::iterator it; 
        for(it=freq.begin();it!=freq.end();it++){
            int first = it->second - 1; 
            res+= (first * (first+1))/2; 
        }
    return res; 
    }
};