/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 *
 * https://leetcode.com/problems/happy-number/description/
 *
 * algorithms
 * Easy (46.36%)
 * Likes:    1070
 * Dislikes: 277
 * Total Accepted:    276K
 * Total Submissions: 588.1K
 * Testcase Example:  '19'
 *
 * Write an algorithm to determine if a number is "happy".
 * 
 * A happy number is a number defined by the following process: Starting with
 * any positive integer, replace the number by the sum of the squares of its
 * digits, and repeat the process until the number equals 1 (where it will
 * stay), or it loops endlessly in a cycle which does not include 1. Those
 * numbers for which this process ends in 1 are happy numbers.
 * 
 * Example: 
 * 
 * 
 * Input: 19
 * Output: true
 * Explanation: 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 * 
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        st.insert(n);
        while(n != 1){
            int sum = 0;
            while(n){
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
            if(st.find(n) != st.end()) return false;
            st.insert(n);
        }
        return true;
    }
};
// @lc code=end

