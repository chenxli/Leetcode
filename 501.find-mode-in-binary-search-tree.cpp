/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
 *
 * https://leetcode.com/problems/find-mode-in-binary-search-tree/description/
 *
 * algorithms
 * Easy (40.05%)
 * Likes:    660
 * Dislikes: 264
 * Total Accepted:    67.9K
 * Total Submissions: 167.7K
 * Testcase Example:  '[1,null,2,2]'
 *
 * Given a binary search tree (BST) with duplicates, find all the mode(s) (the
 * most frequently occurred element) in the given BST.
 * 
 * Assume a BST is defined as follows:
 * 
 * 
 * The left subtree of a node contains only nodes with keys less than or equal
 * to the node's key.
 * The right subtree of a node contains only nodes with keys greater than or
 * equal to the node's key.
 * Both the left and right subtrees must also be binary search trees.
 * 
 * 
 * 
 * 
 * For example:
 * Given BST [1,null,2,2],
 * 
 * 
 * ⁠  1
 * ⁠   \
 * ⁠    2
 * ⁠   /
 * ⁠  2
 * 
 * 
 * 
 * 
 * return [2].
 * 
 * Note: If a tree has more than one mode, you can return them in any order.
 * 
 * Follow up: Could you do that without using any extra space? (Assume that the
 * implicit stack space incurred due to recursion does not count).
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
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        map<int,int>::iterator it = mp.begin();
        int max = -1;
        vector<int> v;
        while(it != mp.end()){
            if(it->second > max){
                v.clear();
                v.push_back(it->first);
                max = it->second;
            }
            else if(it->second == max){
                v.push_back(it->first);
            }
            it++;
        }
        return v;
    }
private:
    map<int, int> mp;
    void dfs(TreeNode* root){
        if(root){
            mp[root->val] += 1;
            dfs(root->left);
            dfs(root->right);
        }
    }    
};
// @lc code=end

