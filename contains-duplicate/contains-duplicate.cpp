class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        map<int,bool> found ; 
        for(int i : nums){ 
            if(found[i]==true){
                return true; 
            } 
            else if(found[i]==false){
                found[i]=true; 
            }
            
        }
        return false ; 
    }
};