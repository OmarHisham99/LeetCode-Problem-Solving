class Solution {
    fun isPalindrome(x: Int): Boolean {
     var s = x.toString()
    var size = s.length
    var ok = true
    for(i in 0 .. size-1) {
        if(s[i]!=s[size-i-1]){
            ok = false
        }
    }
    return ok
}
}