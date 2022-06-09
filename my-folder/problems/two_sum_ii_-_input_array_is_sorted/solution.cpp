class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,vector<int>> m ;
        vector<int> result ; 
        for(int i=0;i<numbers.size();i++){
            m[numbers[i]].push_back(i+1); 
        }
        for(int i=0;i<numbers.size();i++){
            if(m.find(target-numbers[i])!=m.end()){
                if(m[numbers[i]].size()>1){
                    result.push_back(m[numbers[i]][0]); 
                    result.push_back(m[numbers[i]][1]);
                    return result; 
                }
                else{
                result.push_back(m[numbers[i]][0]); 
                result.push_back(m[target-numbers[i]][0]); 
                return result;
                }
            }
        }
        return result ;
    }
};