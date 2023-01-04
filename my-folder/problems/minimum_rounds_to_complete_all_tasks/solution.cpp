class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> task ; 
        for(auto i : tasks){
            task[i]++; 
        }
        int rounds= 0; 
        auto it = task.begin(); 
        for(auto freq : task){
            if(freq.second == 1){
                return -1; 
            }
            else if(freq.second%3==0){
                rounds+=freq.second/3; 
            }
            else {
                rounds+= (freq.second/3)+1; 
            }
        }
        
        return rounds; 
    }
};