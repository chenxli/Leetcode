/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 *
 * https://leetcode.com/problems/valid-perfect-square/description/
 *
 * algorithms
 * Easy (40.33%)
 * Likes:    540
 * Dislikes: 121
 * Total Accepted:    130.4K
 * Total Submissions: 321.8K
 * Testcase Example:  '16'
 *
 * Given a positive integer num, write a function which returns True if num is
 * a perfect square else False.
 * 
 * Note: Do not use any built-in library function such as sqrt.
 * 
 * Example 1:
 * 
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
 * Input: 14
 * Output: false
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0) return true;
        else if(num == 1) return true;
        else{
            for(long long i = 2; i * i <= num; i++){
                if(i * i == num){
                    return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

