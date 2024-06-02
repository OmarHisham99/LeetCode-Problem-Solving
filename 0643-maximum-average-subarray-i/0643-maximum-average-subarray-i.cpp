class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int start = 0 ;
      double maxAvg = INT_MIN ;
      double sum = 0 ;
      for(int i = 0 ; i < nums.size();i++){
        sum+=(double)nums[i]; 
        if(i - start  == k -1){
            double res = sum / (double)k ;
            maxAvg = max(maxAvg,res);
            sum -=nums[start];    
            start++; 
      
        }
      }
      return maxAvg;
    }
};