/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 *
 * https://leetcode.com/problems/merge-intervals/description/
 *
 * algorithms
 * Medium (36.49%)
 * Likes:    2643
 * Dislikes: 209
 * Total Accepted:    425K
 * Total Submissions: 1.2M
 * Testcase Example:  '[[1,3],[2,6],[8,10],[15,18]]'
 *
 * Given a collection of intervals, merge all overlapping intervals.
 * 
 * Example 1:
 * 
 * 
 * Input: [[1,3],[2,6],[8,10],[15,18]]
 * Output: [[1,6],[8,10],[15,18]]
 * Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into
 * [1,6].
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [[1,4],[4,5]]
 * Output: [[1,5]]
 * Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 * 
 * NOTE: input types have been changed on April 15, 2019. Please reset to
 * default code definition to get new method signature.
 * 
 */

// @lc code=start
class Solution {

public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size() <= 1) return intervals;
        else {
            sort(intervals.begin(), intervals.end());
            int i = 1;
            int a = intervals[0][0], b = intervals[0][1];
            while(i < intervals.size()) {
                if(intervals[i][0] <= b) {
                    a = min(intervals[i][0], a);
                    b = max(intervals[i][1], b);
                }
                else {
                    vector<int> v{a, b};
                    res.push_back(v);
                    a = intervals[i][0];
                    b = intervals[i][1];
                }
                i++;
            }
            vector<int> v{a,b};
            res.push_back(v);
            return res;
        }
    }
};
// @lc code=end

