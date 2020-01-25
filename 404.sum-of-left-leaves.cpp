/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
 *
 * https://leetcode.com/problems/sum-of-left-leaves/description/
 *
 * algorithms
 * Easy (49.59%)
 * Likes:    781
 * Dislikes: 92
 * Total Accepted:    144K
 * Total Submissions: 289.1K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Find the sum of all left leaves in a given binary tree.
 * 
 * Example:
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * There are two left leaves in the binary tree, with values 9 and 15
 * respectively. Return 24.
 * 
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        else if(isLeaves(root->left)){
            if(root->right == NULL)
               return root->left->val;
            else return root->left->val + sumOfLeftLeaves(root->right);
        }
        else{
            return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        }
    }
    bool isLeaves(TreeNode* root){
        if(root == NULL) return false;
        else return root->left == NULL && root->right == NULL ? true : false;
    }
};
// @lc code=end

