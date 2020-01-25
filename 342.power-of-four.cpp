/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 *
 * https://leetcode.com/problems/power-of-four/description/
 *
 * algorithms
 * Easy (40.66%)
 * Likes:    357
 * Dislikes: 165
 * Total Accepted:    126.6K
 * Total Submissions: 310.1K
 * Testcase Example:  '16'
 *
 * Given an integer (signed 32 bits), write a function to check whether it is a
 * power of 4.
 * 
 * Example 1:
 * 
 * 
 * Input: 16
 * Output: true
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 5
 * Output: false
 * 
 * 
 * Follow up: Could you solve it without loops/recursion?
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num <= 0) return false;
        else{
            // return num == pow(4, 1) || num == pow(4, 2) ||
            //        num == pow(4, 3) || num == pow(4, 4) ||
            //        num == pow(4, 5) || num == pow(4, 6) ||
            //        num == pow(4, 7) || num == pow(4, 8) ||
            //        num == pow(4, 9) || num == pow(4, 10) ||
            //        num == pow(4, 11) || num == pow(4, 12) ||
            //        num == pow(4, 13) || num == pow(4, 14) ||
            //        num == pow(4, 15) || num == pow(4, 0);
            return pow(4, round(log(num)*1.0 / log(4))) == num;
        }
    }
};
// @lc code=end

