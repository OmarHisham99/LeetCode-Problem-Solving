class Solution {
public:
    int firstUniqChar(string s) {
         ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
        unordered_map<int,pair<int,int>> m; 
        for (int i = 0; i < s.size(); i++) {
          m[s[i]].first++;
          m[s[i]].second = i;
     }
     for (int i = 0;i<s.size();i++) {
          if (m[s[i]].first== 1) {
               return m[s[i]].second;
          }
     }
        return -1; 
    }
};