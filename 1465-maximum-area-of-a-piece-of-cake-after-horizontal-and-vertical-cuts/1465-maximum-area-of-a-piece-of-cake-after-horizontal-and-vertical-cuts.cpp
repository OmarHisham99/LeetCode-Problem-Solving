class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        long long vert=0,horz=0 ; 
        long long m = 1000000007;
        sort(horizontalCuts.begin(),horizontalCuts.end()); 
        sort(verticalCuts.begin(),verticalCuts.end());
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w); 
        
        if(verticalCuts.size()==1){
            if(verticalCuts[0]-0> w-verticalCuts[0]){
               vert=verticalCuts[0]-0;
            }
            else 
            vert = w-verticalCuts[0]; 
        }
        else{
            vert = getMaxDiff(verticalCuts);  
        }
        if(horizontalCuts.size()==1){
           if(horizontalCuts[0]-0> h-horizontalCuts[0]){
               horz=horizontalCuts[0]-0;
            }
            else 
            horz = h-horizontalCuts[0]; 
        }
        else{
            horz = getMaxDiff(horizontalCuts);  
        }
        
        return ((vert%m)*(horz%m))%m; 
    }
    
    int getMaxDiff(vector<int>& v){
        int maxi =v[0]-0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]>maxi) maxi= v[i+1]-v[i]; 
        }
        return maxi; 
    }
    
};