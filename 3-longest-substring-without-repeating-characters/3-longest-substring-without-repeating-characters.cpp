class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int maxi = 0;
     int cnt = 0;
     unordered_map<char, bool> m;
     int i = 0; 
     int index = 1; 
    while(i<s.size()) {

          if (!m[s[i]]) {
               cnt++;
               m[s[i]] = true;
               i++;
               if (cnt > maxi) maxi = cnt; 
          }
          else {
               cnt = 0;
               i = index; 
               index++; 
               m.clear();
          }
     }        
        return maxi;         
       }
};