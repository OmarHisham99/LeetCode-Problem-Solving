class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        map<int,int> freq ;
        vector<int> result ;  
        int size = (nums.size())/3;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++; 
        }
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second > size) result.push_back(it->first); 
        }
        return result ; 
    }
};