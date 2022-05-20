public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n) {
        int left1 =0 , left2=0,left=0; 
        int[] arr = new int[m+n];
        while(left <m+n){
            if(left1>m-1){
                arr[left] =nums2[left2];
                left2++;
            }
            else if(left2>n-1){
                arr[left]=nums1[left1];
                left1++;
            }
            else{
                if(nums1[left1]<=nums2[left2]){
                    arr[left]=nums1[left1]; 
                    left1++;
                }
                else{
                    arr[left]=nums2[left2];
                    left2++;
                }
            }
            left++; 
        }
        for(int i =0;i<arr.Length;i++){
            nums1[i]=arr[i];
        }
        
    }
}