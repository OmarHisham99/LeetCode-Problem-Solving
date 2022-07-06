class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
     int total =0 ;    
     priority_queue<pair<int,int>> pq;
    
    for(auto v : boxTypes){
        pq.push({v[1],v[0]});
    }
  
    while(truckSize>0 && !pq.empty()){
        if(truckSize<=pq.top().second){
            total+=truckSize*pq.top().first; 
            truckSize = 0 ; 
        }
        else {
        total+= pq.top().first * pq.top().second;
        truckSize-=pq.top().second;
        pq.pop(); 
        }
       
    }
        return total; 
    }
};