/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 *
 * https://leetcode.com/problems/sum-of-square-numbers/description/
 *
 * algorithms
 * Easy (32.65%)
 * Likes:    416
 * Dislikes: 278
 * Total Accepted:    56.8K
 * Total Submissions: 175K
 * Testcase Example:  '5'
 *
 * Given a non-negative integer c, your task is to decide whether there're two
 * integers a and b such that a^2 + b^2 = c.
 * 
 * Example 1:
 * 
 * 
 * Input: 5
 * Output: True
 * Explanation: 1 * 1 + 2 * 2 = 5
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 3
 * Output: False
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i = 0; i * i <= c / 2; i++) {
            int n = sqrt(c - i * i);
            if(n * n == c - i * i) return true;
        }
        return false;
    }
};
// @lc code=end

