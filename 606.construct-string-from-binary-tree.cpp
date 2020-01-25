/*
 * @lc app=leetcode id=606 lang=cpp
 *
 * [606] Construct String from Binary Tree
 *
 * https://leetcode.com/problems/construct-string-from-binary-tree/description/
 *
 * algorithms
 * Easy (52.09%)
 * Likes:    633
 * Dislikes: 861
 * Total Accepted:    70.8K
 * Total Submissions: 134.1K
 * Testcase Example:  '[1,2,3,4]'
 *
 * You need to construct a string consists of parenthesis and integers from a
 * binary tree with the preorder traversing way.
 * 
 * The null node needs to be represented by empty parenthesis pair "()". And
 * you need to omit all the empty parenthesis pairs that don't affect the
 * one-to-one mapping relationship between the string and the original binary
 * tree.
 * 
 * Example 1:
 * 
 * Input: Binary tree: [1,2,3,4]
 * ⁠      1
 * ⁠    /   \
 * ⁠   2     3
 * ⁠  /    
 * ⁠ 4     
 * 
 * Output: "1(2(4))(3)"
 * Explanation: Originallay it needs to be "1(2(4)())(3()())", but you need to
 * omit all the unnecessary empty parenthesis pairs. And it will be
 * "1(2(4))(3)".
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: Binary tree: [1,2,3,null,4]
 * ⁠      1
 * ⁠    /   \
 * ⁠   2     3
 * ⁠    \  
 * ⁠     4 
 * 
 * Output: "1(2()(4))(3)"
 * Explanation: Almost the same as the first example, except we can't omit the
 * first parenthesis pair to break the one-to-one mapping relationship between
 * the input and the output.
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
    string tree2str(TreeNode* t) {
        string s = "";
        if(t == NULL) return s;
        else {
            bool l = false, r = false;
            if(t->left) l = true;
            if(t->right) r = true;
            s += to_string(t->val);
            if(l ||(!l && r)) s += "(";
            s += tree2str(t->left);
            if (l || (!l && r)) s += ")";
            if(r) s += "(";
            s += tree2str(t->right);
            if(r) s += ")";
            return s;
        }
    }
};
// @lc code=end

