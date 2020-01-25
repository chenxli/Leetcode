/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 *
 * https://leetcode.com/problems/add-digits/description/
 *
 * algorithms
 * Easy (54.68%)
 * Likes:    528
 * Dislikes: 864
 * Total Accepted:    255.5K
 * Total Submissions: 465.1K
 * Testcase Example:  '38'
 *
 * Given a non-negative integer num, repeatedly add all its digits until the
 * result has only one digit.
 * 
 * Example:
 * 
 * 
 * Input: 38
 * Output: 2 
 * Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
 * Since 2 has only one digit, return it.
 * 
 * 
 * Follow up:
 * Could you do it without any loop/recursion in O(1) runtime?
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        int n = 0;
        while(num){
            n = n + num % 10;
            num /= 10;
            if(num == 0){
                if(n / 10 == 0) return n;
                else {
                    num = n;
                    n = 0;
                }
            }
        }
        return num;
    }
};
// @lc code=end

