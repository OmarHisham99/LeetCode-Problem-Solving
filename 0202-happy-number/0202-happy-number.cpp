class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen; 
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int sum = 0;  
            while(n > 0){
                int x = n%10; 
                sum += pow(x,2); 
                n/=10; 
            }
            n = sum; 
        }
        return n==1; 
    }
};