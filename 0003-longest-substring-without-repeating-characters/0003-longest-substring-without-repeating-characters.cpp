class Solution {
public:
   int lengthOfLongestSubstring(string s) {
       if(s.size()==0 || s.size()==1) return s.size();
     int left = 0, res = INT_MIN;
     unordered_set<char> seen; 
     for (int i = 0; i < s.size(); i++) {
          if (seen.count(s[i])) {
               int size = seen.size();
               cout << size << endl;
               res = max(size, res);
               seen.clear();
               cout << seen.size() << endl;
               i = left; 
               left++;
          }
          seen.insert(s[i]);
     }
     int size = seen.size(); 
     res = max(size,res); 
     return res!=INT_MIN ? res : 0 ;
}
};