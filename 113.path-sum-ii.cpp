/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
 *
 * https://leetcode.com/problems/path-sum-ii/description/
 *
 * algorithms
 * Medium (41.99%)
 * Likes:    1204
 * Dislikes: 42
 * Total Accepted:    274.6K
 * Total Submissions: 634.8K
 * Testcase Example:  '[5,4,8,11,null,13,4,7,2,null,null,5,1]\n22'
 *
 * Given a binary tree and a sum, find all root-to-leaf paths where each path's
 * sum equals the given sum.
 * 
 * Note: A leaf is a node with no children.
 * 
 * Example:
 * 
 * Given the below binary tree and sum = 22,
 * 
 * 
 * ⁠     5
 * ⁠    / \
 * ⁠   4   8
 * ⁠  /   / \
 * ⁠ 11  13  4
 * ⁠/  \    / \
 * 7    2  5   1
 * 
 * 
 * Return:
 * 
 * 
 * [
 * ⁠  [5,4,11,2],
 * ⁠  [5,8,4,5]
 * ]
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        dfs(root, sum);
        return v;
    }
private:
    vector<vector<int>> v;
    vector<int> vec;
    void dfs(TreeNode* root, int sum){
        if(!root) return;
        else if(root->left == NULL && root->right == NULL){
            int temp = 0;
            vec.push_back(root->val);
            for(int i = 0; i < vec.size(); i++) temp += vec[i];
            if(temp == sum) v.push_back(vec); 
            return;
        }
        vec.push_back(root->val);
        if(root->left){
            dfs(root->left, sum);
            vec.pop_back();
        }
        if(root->right){
            dfs(root->right, sum);
            vec.pop_back();
        }
    }
};
// @lc code=end

