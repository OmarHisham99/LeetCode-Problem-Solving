class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> v ; 
        unordered_map<int,int> found ; 
        for(int i : nums1){
            if(i==0){
                found[i]+=1; 
            }else
            found[i]+= i; 
        }
        for(int i : nums2){
            if(found[i] >0){
                 v.push_back(i);
                if(i==0){
                    found[i]-=1; 
                }else
                 found[i]-=i; 
            }
        }
        return v; 
    }
};