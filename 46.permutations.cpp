/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 *
 * https://leetcode.com/problems/permutations/description/
 *
 * algorithms
 * Medium (57.12%)
 * Likes:    2484
 * Dislikes: 80
 * Total Accepted:    443.1K
 * Total Submissions: 767.9K
 * Testcase Example:  '[1,2,3]'
 *
 * Given a collection of distinct integers, return all possible permutations.
 * 
 * Example:
 * 
 * 
 * Input: [1,2,3]
 * Output:
 * [
 * ⁠ [1,2,3],
 * ⁠ [1,3,2],
 * ⁠ [2,1,3],
 * ⁠ [2,3,1],
 * ⁠ [3,1,2],
 * ⁠ [3,2,1]
 * ]
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permute_help(res,0,nums);
        return res;
    }
    void permute_help(vector<vector<int>> &res,int n,vector<int> &nums){
        if(n == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i = n; i < nums.size(); i++){
            swap(nums[i],nums[n]);
            permute_help(res,n+1,nums);
            swap(nums[n],nums[i]);
        }
    }
};
/*
dfs思想
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> v;
        vector<int> vis(nums.size(),0);
        dfs(res,nums,v,vis);
        return res;
    }
void dfs(vector<vector<int>> &res, vector<int> &nums,vector<int> &v,vector<int> &vis){
    if(v.size() == nums.size()){
        res.push_back(v);
        return;
    }
    for(int i = 0; i < nums.size(); i++){
        if(vis[i]) continue;
        v.push_back(nums[i]);
        vis[i] = 1;
        dfs(res,nums,v,vis);
        vis[i] = 0;
        v.pop_back();
    }
}
*/
// @lc code=end
