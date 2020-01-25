/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (41.62%)
 * Likes:    1006
 * Dislikes: 1781
 * Total Accepted:    450.7K
 * Total Submissions: 1.1M
 * Testcase Example:  '[1,2,3]'
 *
 * Given a non-empty array of digits representing a non-negative integer, plus
 * one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list, and each element in the array contain a single digit.
 * 
 * You may assume the integer does not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        if(digits.size() == 0) return v;
        int k = digits.size() - 1;
        int cnt = 1;
        while(k >= 0){
            v.push_back((digits[k]+cnt) % 10);
            cnt = (digits[k] + cnt) / 10;
            k--;
        }
        if(cnt) 
          v.push_back(cnt);
        reverse(v.begin(),v.end());
        return v;
    }
};
// @lc code=end

