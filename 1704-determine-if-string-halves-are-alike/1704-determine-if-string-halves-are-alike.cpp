class Solution {
public: 
    bool isVowel(char c){
        char s = toupper(c);
        if(s=='A' ||s=='E'||s=='O' ||s=='I' ||s=='U')
        return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int a =0 ,b =0 ; 
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i]) && i<(s.size()/2)){
                a++;
            }
            else if(isVowel(s[i]) && i>=(s.size()/2)){
                b++;
            }
        }
        return a==b; 
    }
};