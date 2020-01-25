/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 *
 * https://leetcode.com/problems/factorial-trailing-zeroes/description/
 *
 * algorithms
 * Easy (37.55%)
 * Likes:    563
 * Dislikes: 806
 * Total Accepted:    173.6K
 * Total Submissions: 461.5K
 * Testcase Example:  '3'
 *
 * Given an integer n, return the number of trailing zeroes in n!.
 * 
 * Example 1:
 * 
 * 
 * Input: 3
 * Output: 0
 * Explanation: 3! = 6, no trailing zero.
 * 
 * Example 2:
 * 
 * 
 * Input: 5
 * Output: 1
 * Explanation: 5! = 120, one trailing zero.
 * 
 * Note: Your solution should be in logarithmic time complexity.
 * 
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n){
            count += n / 5;
            n /= 5;
        }
        return count;
    }
};
// @lc code=end

