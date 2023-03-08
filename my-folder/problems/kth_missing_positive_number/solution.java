class Solution {
    public int findKthPositive(int[] arr, int k) {
       int num =1,cnt =0 ; 
       for(int i=0;i<arr.length;i++){
           if(cnt==k){
               return num-1; 
           }
           else if(num!=arr[i]){
               cnt++; 
               i--; 
           }
           num++; 
       }
       return num+k-cnt-1;
    }
} // int size = arr.length;
        // int c,i=0;
        // if(arr[0]>1)
        // {
        //     c=arr[0]-1;
        // }
        // k=k-c;
        // for (i=0;i<size;i++)
        // {
        //    if(k==c) break;
        //    if(arr[i+1]- arr[i] > 1 && k-c >= k)
        //    { c+=arr[i+1]- arr[i];
        //    }

        // }
        // return c;