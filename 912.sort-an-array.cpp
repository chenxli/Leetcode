/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 *
 * https://leetcode.com/problems/sort-an-array/description/
 *
 * algorithms
 * Medium (63.18%)
 * Likes:    202
 * Dislikes: 157
 * Total Accepted:    37.9K
 * Total Submissions: 60.3K
 * Testcase Example:  '[5,2,3,1]'
 *
 * Given an array of integers nums, sort the array in ascending order.
 * 
 * 
 * Example 1:
 * Input: nums = [5,2,3,1]
 * Output: [1,2,3,5]
 * Example 2:
 * Input: nums = [5,1,1,2,0,0]
 * Output: [0,0,1,1,2,5]
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= nums.length <= 50000
 * -50000 <= nums[i] <= 50000
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        return v;
    }
};
// @lc code=end

