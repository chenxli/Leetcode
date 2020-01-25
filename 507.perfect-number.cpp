/*
 * @lc app=leetcode id=507 lang=cpp
 *
 * [507] Perfect Number
 *
 * https://leetcode.com/problems/perfect-number/description/
 *
 * algorithms
 * Easy (34.87%)
 * Likes:    192
 * Dislikes: 524
 * Total Accepted:    51.4K
 * Total Submissions: 146.3K
 * Testcase Example:  '28'
 *
 * We define the Perfect Number is a positive integer that is equal to the sum
 * of all its positive divisors except itself. 
 * 
 * Now, given an integer n, write a function that returns true when it is a
 * perfect number and false when it is not.
 * 
 * 
 * Example:
 * 
 * Input: 28
 * Output: True
 * Explanation: 28 = 1 + 2 + 4 + 7 + 14
 * 
 * 
 * 
 * Note:
 * The input number n will not exceed 100,000,000. (1e8)
 * 
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        int sum = 1;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                sum += i;
                sum += num / i;
            }
        }
        if(sum == num) return true;
        return false;
    }
};
// @lc code=end

