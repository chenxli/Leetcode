/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition I
 *
 * https://leetcode.com/problems/array-partition-i/description/
 *
 * algorithms
 * Easy (69.86%)
 * Likes:    657
 * Dislikes: 2039
 * Total Accepted:    177.3K
 * Total Submissions: 251.5K
 * Testcase Example:  '[1,4,3,2]'
 *
 * 
 * Given an array of 2n integers, your task is to group these integers into n
 * pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of
 * min(ai, bi) for all i from 1 to n as large as possible.
 * 
 * 
 * Example 1:
 * 
 * Input: [1,4,3,2]
 * 
 * Output: 4
 * Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3,
 * 4).
 * 
 * 
 * 
 * Note:
 * 
 * n is a positive integer, which is in the range of [1, 10000].
 * All the integers in the array will be in the range of [-10000, 10000].
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        int sum = 0;
        for(int i = 0; i < v.size(); i += 2){
            sum += v[i];
        }
        return sum;
    }
};
// @lc code=end

