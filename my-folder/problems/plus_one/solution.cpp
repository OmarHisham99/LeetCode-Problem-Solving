class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { 
        int k = digits.size()-1;
        while(true){
            if(k==0 && digits[k]==9){
                digits[k] = 0 ; 
                digits.push_back(1); 
                reverse(digits.begin(),digits.end());
                break;
            }
            if(digits[k]+1<10){
                digits[k]++;
                break; 
            }
            else{
                digits[k]=0 ; 
                k--; 
            }
        }
    return digits ; 
        
    }
};