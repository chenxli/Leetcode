/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 *
 * https://leetcode.com/problems/binary-tree-paths/description/
 *
 * algorithms
 * Easy (47.08%)
 * Likes:    1081
 * Dislikes: 79
 * Total Accepted:    254.1K
 * Total Submissions: 533.1K
 * Testcase Example:  '[1,2,3,null,5]'
 *
 * Given a binary tree, return all root-to-leaf paths.
 * 
 * Note: A leaf is a node with no children.
 * 
 * Example:
 * 
 * 
 * Input:
 * 
 * ⁠  1
 * ⁠/   \
 * 2     3
 * ⁠\
 * ⁠ 5
 * 
 * Output: ["1->2->5", "1->3"]
 * 
 * Explanation: All root-to-leaf paths are: 1->2->5, 1->3
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string s;
        if(root == NULL) return v;
        else if(root->left == NULL && root->right == NULL){
            v.push_back(int2str(root->val));
            return v;
        }
        else{
            s = int2str(root->val);
            dfs(root, v, s);
        }
        return v;
    }
    string int2str(int n){
        string s;
        bool flag = false;
        if(n == 0) return "0";
        if(n < 0) {
            flag = true;
            n = -n;
        }
        while(n){
            s = (char)(n % 10 + '0') + s;
            n /= 10;
        }
        if(flag) s = "-" + s;
        return s;
    }
    void dfs(TreeNode* root, vector<string> &v, string &s){
        if(root->left == NULL && root->right == NULL){
            v.push_back(s);
            return;
        }
        if(root->left){
            string s1 = int2str(root->left->val);
            s = s + "->" + s1;
            dfs(root->left, v, s);
            s = s.substr(0, s.size()-s1.size()-2);
        }
        if(root->right){
            string s1 = int2str(root->right->val);
            s = s + "->" + s1;
            dfs(root->right, v, s);
            s = s.substr(0, s.size()-s1.size()-2);
        }
    }
};
// @lc code=end

