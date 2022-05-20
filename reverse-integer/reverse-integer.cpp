class Solution {
public:
    int reverse(int x) {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     bool is_neg = x<0;
        string s = to_string(x);
        string res = "";
        for(int i=s.size()-1; i>=0; i--) {
            res.push_back(s[i]);
        }
        int ans;
        try
        {
            ans = stoi(res);
        }
        catch(exception e)
        {
            return 0;
        }
        if(is_neg) return -ans;
        return ans;
        }
};