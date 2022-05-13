/* The isBadVersion API is defined in the parent class VersionControl.
      bool IsBadVersion(int version); */

public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
        int left =0, right =n ;
        while(left<right){
            int mid = left+(right-left)/2;
            if(IsBadVersion(mid)){
                if(IsBadVersion(mid-1)){
                    right = mid-1; 
                }
                else return mid ;
            }else {
                left=mid+1;
                if(IsBadVersion(mid+1))
                    return mid+1; 
            }
        }
        return 0; 
    }
}