/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 *
 * https://leetcode.com/problems/power-of-three/description/
 *
 * algorithms
 * Easy (41.81%)
 * Likes:    340
 * Dislikes: 1201
 * Total Accepted:    210K
 * Total Submissions: 501.4K
 * Testcase Example:  '27'
 *
 * Given an integer, write a function to determine if it is a power of three.
 * 
 * Example 1:
 * 
 * 
 * Input: 27
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 0
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: 9
 * Output: true
 * 
 * Example 4:
 * 
 * 
 * Input: 45
 * Output: false
 * 
 * Follow up:
 * Could you do it without using any loop / recursion?
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        int maxNum = pow(3, 19);
        return maxNum % n == 0;
    }
};
// @lc code=end

