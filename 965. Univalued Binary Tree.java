/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isUnivalTree(TreeNode root) {

        int var= root.val;
        return isUT(root,var);
    }
    private boolean isUT(TreeNode root, int var) {
        if(root == null){
            return true;
        }
        return (root.val == var) && isUT(root.left,var) && isUT(root.right,var);

    }
    
}