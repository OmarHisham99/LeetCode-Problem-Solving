class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     for (int i = digits.size() - 1; i >= 0; i--)
     {
          if (i == 0 && digits[i] == 9) {
               digits[i] = 0; 
               digits.insert(digits.begin(), 1); 
          }
          else if (digits[i] != 9) {
               digits[i]++; 
               break; 
          }
          else {
               digits[i] = 0; 
          }
     }
        return digits; 
    }
};