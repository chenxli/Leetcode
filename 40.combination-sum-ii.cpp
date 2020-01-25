/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 *
 * https://leetcode.com/problems/combination-sum-ii/description/
 *
 * algorithms
 * Medium (43.22%)
 * Likes:    1077
 * Dislikes: 50
 * Total Accepted:    251.8K
 * Total Submissions: 577.6K
 * Testcase Example:  '[10,1,2,7,6,1,5]\n8'
 *
 * Given a collection of candidate numbers (candidates) and a target number
 * (target), find all unique combinations in candidates where the candidate
 * numbers sums to target.
 * 
 * Each number in candidates may only be used once in the combination.
 * 
 * Note:
 * 
 * 
 * All numbers (including target) will be positive integers.
 * The solution set must not contain duplicate combinations.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: candidates = [10,1,2,7,6,1,5], target = 8,
 * A solution set is:
 * [
 * ⁠ [1, 7],
 * ⁠ [1, 2, 5],
 * ⁠ [2, 6],
 * ⁠ [1, 1, 6]
 * ]
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: candidates = [2,5,2,1,2], target = 5,
 * A solution set is:
 * [
 * [1,2,2],
 * [5]
 * ]
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, -1);
        for(auto it = st.begin(); it != st.end(); it++) {
            res.push_back(*it);
        }
        return res;
    }
private:
    vector<int> v;
    vector<vector<int>> res;
    set<vector<int>> st;
    int sum = 0;
    void dfs(vector<int>& vec, int target, int index) {
        if(sum == target) {
            st.insert(v);
            return;
        }
        else if(target < sum) return;
        for(int i = index + 1; i < vec.size(); i++) {
            v.push_back(vec[i]);
            sum += vec[i];
            dfs(vec, target, i);
            sum -= vec[i];
            v.pop_back();
        }
    }
};
// @lc code=end

