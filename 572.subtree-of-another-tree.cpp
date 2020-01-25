/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
 *
 * https://leetcode.com/problems/subtree-of-another-tree/description/
 *
 * algorithms
 * Easy (42.10%)
 * Likes:    1645
 * Dislikes: 72
 * Total Accepted:    155.9K
 * Total Submissions: 359.7K
 * Testcase Example:  '[3,4,5,1,2]\n[4,1,2]'
 *
 * 
 * Given two non-empty binary trees s and t, check whether tree t has exactly
 * the same structure and node values with a subtree of s. A subtree of s is a
 * tree consists of a node in s and all of this node's descendants. The tree s
 * could also be considered as a subtree of itself.
 * 
 * 
 * Example 1:
 * 
 * Given tree s:
 * 
 * ⁠    3
 * ⁠   / \
 * ⁠  4   5
 * ⁠ / \
 * ⁠1   2
 * 
 * Given tree t:
 * 
 * ⁠  4 
 * ⁠ / \
 * ⁠1   2
 * 
 * Return true, because t has the same structure and node values with a subtree
 * of s.
 * 
 * 
 * Example 2:
 * 
 * Given tree s:
 * 
 * ⁠    3
 * ⁠   / \
 * ⁠  4   5
 * ⁠ / \
 * ⁠1   2
 * ⁠   /
 * ⁠  0
 * 
 * Given tree t:
 * 
 * ⁠  4
 * ⁠ / \
 * ⁠1   2
 * 
 * Return false.
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == NULL && t != NULL) return false;
        else if(s != NULL && t == NULL) return false;
        else if(s == NULL && t == NULL) return true;
        else {
            bool flag = false;
            if(s->val == t->val)
                flag = isTheSame(s->left, t->left) && isTheSame(s->right, t->right);
            if(flag) return flag;
            else return isSubtree(s->left, t) || isSubtree(s->right, t);
        }
    }
private:
    bool isTheSame(TreeNode* s, TreeNode* t) {
        if(s == NULL && t != NULL) return false;
        else if(s != NULL && t == NULL) return false;
        else if(s == NULL && t == NULL) return true;
        else if(s->val != t->val) return false;
        else return isTheSame(s->left, t->left) && isTheSame(s->right, t->right);
    }
};
// @lc code=end

