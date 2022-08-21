class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size(); 
        unordered_map<int,int> m ;
        priority_queue<int> pq ; 
        for(int i=0; i<n;i++){
            m[arr[i]]++; 
        }
        for(auto it : m){
            pq.push(it.second); 
        }
        int elements = 0 ; 
        int cnt = 0 ; 
        while(!pq.empty()){
            elements +=pq.top(); 
            pq.pop(); 
            cnt++; 
            
            if(elements>=n/2)
                return cnt; 
        }
        return 0 ; 
    }
};