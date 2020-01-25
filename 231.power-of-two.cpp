/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 *
 * https://leetcode.com/problems/power-of-two/description/
 *
 * algorithms
 * Easy (42.30%)
 * Likes:    525
 * Dislikes: 142
 * Total Accepted:    252.4K
 * Total Submissions: 594.7K
 * Testcase Example:  '1'
 *
 * Given an integer, write a function to determine if it is a power of two.
 * 
 * Example 1:
 * 
 * 
 * Input: 1
 * Output: true 
 * Explanation: 2^0 = 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 16
 * Output: true
 * Explanation: 2^4 = 16
 * 
 * Example 3:
 * 
 * 
 * Input: 218
 * Output: false
 * 
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        long long num = 1;
        while(num < n){
            num *= 2;
            if(num == n) return true;
        }
        return false;
    }
};
// @lc code=end

