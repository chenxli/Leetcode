/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 *
 * https://leetcode.com/problems/base-7/description/
 *
 * algorithms
 * Easy (45.15%)
 * Likes:    176
 * Dislikes: 132
 * Total Accepted:    47.5K
 * Total Submissions: 104.5K
 * Testcase Example:  '100'
 *
 * Given an integer, return its base 7 string representation.
 * 
 * Example 1:
 * 
 * Input: 100
 * Output: "202"
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: -7
 * Output: "-10"
 * 
 * 
 * 
 * Note:
 * The input will be in range of [-1e7, 1e7].
 * 
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        bool flag = false;
        if(num < 0) {
            num = -num;
            flag = true;
        }
        else if(num == 0) return "0";
        string s;
        while(num){
            s += static_cast<char>(num % 7 + '0');
            num /= 7;
        }
        reverse(s.begin(), s.end());
        if(flag) return "-" + s;
        else return s; 
    }
};
// @lc code=end

