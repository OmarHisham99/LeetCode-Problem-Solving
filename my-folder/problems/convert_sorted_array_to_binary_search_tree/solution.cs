/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public TreeNode SortedArrayToBST(int[] nums) {
        if(nums.Length ==0) return null;
        
        return constructTree(nums,0,nums.Length-1);
    }
    public TreeNode constructTree(int[] nums ,int left ,int right){
        if(left> right)return null;
        int mid = left+(right-left)/2;
        TreeNode node = new TreeNode(nums[mid]);
        node.left= constructTree(nums,left,mid-1);
        node.right= constructTree(nums,mid+1,right);
        
        return node;
    }
}