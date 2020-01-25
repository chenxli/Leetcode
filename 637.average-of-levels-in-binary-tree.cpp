/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
 *
 * https://leetcode.com/problems/average-of-levels-in-binary-tree/description/
 *
 * algorithms
 * Easy (59.59%)
 * Likes:    949
 * Dislikes: 136
 * Total Accepted:    98.7K
 * Total Submissions: 162.8K
 * Testcase Example:  '[3,9,20,15,7]'
 *
 * Given a non-empty binary tree, return the average value of the nodes on each
 * level in the form of an array.
 * 
 * Example 1:
 * 
 * Input:
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * Output: [3, 14.5, 11]
 * Explanation:
 * The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on
 * level 2 is 11. Hence return [3, 14.5, 11].
 * 
 * 
 * 
 * Note:
 * 
 * The range of node's value is in the range of 32-bit signed integer.
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        if(root == NULL) return v;
        queue<TreeNode*> q;
        map<TreeNode*, int> depth;
        q.push(root);
        depth[root] = 1;
        int cur_depth = 1;
        double sum = 0;
        int num = 0;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left) {
                q.push(temp->left);
                depth[temp->left] = depth[temp] + 1;
            }
            if(temp->right) {
                q.push(temp->right);
                depth[temp->right] = depth[temp] + 1;
            }
            if(cur_depth == depth[temp]){
                sum += temp->val;
                num++;
            }
            else {
                cur_depth = depth[temp];
                v.push_back(sum / num);
                sum = temp->val;
                num = 1;
            }
        }
        if(num) {
            v.push_back(sum / num);
        }
        return v;
    }
};
// @lc code=end

