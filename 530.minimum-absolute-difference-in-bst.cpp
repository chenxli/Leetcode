/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
 *
 * https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/
 *
 * algorithms
 * Easy (51.31%)
 * Likes:    649
 * Dislikes: 52
 * Total Accepted:    72.9K
 * Total Submissions: 140.4K
 * Testcase Example:  '[1,null,3,2]'
 *
 * Given a binary search tree with non-negative values, find the minimum
 * absolute difference between values of any two nodes.
 * 
 * Example:
 * 
 * 
 * Input:
 * 
 * ⁠  1
 * ⁠   \
 * ⁠    3
 * ⁠   /
 * ⁠  2
 * 
 * Output:
 * 1
 * 
 * Explanation:
 * The minimum absolute difference is 1, which is the difference between 2 and
 * 1 (or between 2 and 3).
 * 
 * 
 * 
 * 
 * Note: There are at least two nodes in this BST.
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
    int getMinimumDifference(TreeNode* root) {
        int minVal = 1000;
        inOrder(root);
        for(int i = 1; i < v.size(); i++){
            if(v[i] - v[i-1] < minVal){
                minVal = v[i] - v[i-1];
            }
        }
        return minVal;
    }
private:
    vector<int> v;
    void inOrder(TreeNode* root){
        if(root){
            inOrder(root->left);
            v.push_back(root->val);
            inOrder(root->right);
        }
    }
};
// @lc code=end

