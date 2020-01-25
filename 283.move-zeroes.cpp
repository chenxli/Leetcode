/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (55.03%)
 * Likes:    2479
 * Dislikes: 90
 * Total Accepted:    548.5K
 * Total Submissions: 989.3K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 1; j < nums.size()-i; j++){
                if(nums[j-1] == 0 && nums[j] != 0)
                    swap(nums[j-1],nums[j]);
            }
        }
    }
};
// @lc code=end

