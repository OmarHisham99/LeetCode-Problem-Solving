class Solution {
public:
    bool isSubsequence(string s, string t) {
       int n=s.size(),m=t.size();
        int i=0; 
        int j=0;
      if(n>m) return false;

      while(i<n &&j<m)
      {
        if(t[j]==s[i])
        {  
          i++;
          j++;
        }
        else
        {
          j++;
        }
      }
      return (i==n);
    }   
int numMatchingSubseq(string s, vector<string>& words) {
    int n=words.size();
    int count=0;
   unordered_map<string,bool>mp;
    for(string w:words)
    {
        if(mp.find(w)!=mp.end()) //it may possible that string are repeating
        {
            if(mp[w]==true)
                count++;
        }
        else
        {
            bool t= isSubsequence(w,s);
            if(t==true)
            {
                count++;
            }
            mp[w]=t;
        }
    }
    return count;
}
};