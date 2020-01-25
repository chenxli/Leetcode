/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (53.13%)
 * Likes:    494
 * Dislikes: 578
 * Total Accepted:    404.6K
 * Total Submissions: 754.1K
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an array of integers, find if the array contains any duplicates.
 * 
 * Your function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3,1]
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input: [1,2,3,4]
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: [1,1,1,3,3,4,3,2,4,2]
 * Output: true
 * 
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size() != nums.size()) return true;
        else return false;
    }
};
// @lc code=end

