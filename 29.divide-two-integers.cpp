/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 *
 * https://leetcode.com/problems/divide-two-integers/description/
 *
 * algorithms
 * Medium (16.16%)
 * Likes:    760
 * Dislikes: 3686
 * Total Accepted:    214.1K
 * Total Submissions: 1.3M
 * Testcase Example:  '10\n3'
 *
 * Given two integers dividend and divisor, divide two integers without using
 * multiplication, division and mod operator.
 * 
 * Return the quotient after dividing dividend by divisor.
 * 
 * The integer division should truncate toward zero.
 * 
 * Example 1:
 * 
 * 
 * Input: dividend = 10, divisor = 3
 * Output: 3
 * 
 * Example 2:
 * 
 * 
 * Input: dividend = 7, divisor = -3
 * Output: -2
 * 
 * Note:
 * 
 * 
 * Both dividend and divisor will be 32-bit signed integers.
 * The divisor will never be 0.
 * Assume we are dealing with an environment which could only store integers
 * within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose
 * of this problem, assume that your function returns 2^31 − 1 when the
 * division result overflows.
 * 
 * 
 */
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long quotient = 0;
        long long m = dividend;
        if(dividend == 0) return 0;
        bool flg1 = true, flg2 = true;
        if(dividend < 0) {
            flg1 = false;
            m = -m;
        }
        if(divisor < 0){
            flg2 = false;
            divisor = -divisor;
        }
        if(flg2 && divisor == 1) return dividend;
        else if(!flg2 && divisor == 1) {
            if(dividend == INT_MIN) return INT_MAX;
            else return -dividend;
        }
        while(m >= divisor){
            m -= divisor;
            quotient++;
        }
        if((flg1 && !flg2) || (!flg1 && flg2)){
            if(-quotient < INT_MIN)  return INT_MAX;
            else return -quotient;
        }
        else{
            if(quotient > INT_MAX)  return INT_MAX;
            else return quotient;
        }
    }
};

