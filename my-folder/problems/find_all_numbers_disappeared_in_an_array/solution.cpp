class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        vector<int> missingNumbers ;
        set<int> numbers (nums.begin(),nums.end()); 
        int size = nums.size();  
        auto iterator = numbers.begin(); 
        for(int i=1;i<=size;i++){
            if(i!=*iterator){
                missingNumbers.push_back(i); 
            }
            else {
                iterator++; 
            }
        }
        return missingNumbers; 
    }
};