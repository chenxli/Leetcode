/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 *
 * https://leetcode.com/problems/binary-search/description/
 *
 * algorithms
 * Easy (49.18%)
 * Likes:    411
 * Dislikes: 37
 * Total Accepted:    90.9K
 * Total Submissions: 181.4K
 * Testcase Example:  '[-1,0,3,5,9,12]\n9'
 *
 * Given a sorted (in ascending order) integer array nums of n elements and a
 * target value, write a function to search target in nums. If target exists,
 * then return its index, otherwise return -1.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [-1,0,3,5,9,12], target = 9
 * Output: 4
 * Explanation: 9 exists in nums and its index is 4
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [-1,0,3,5,9,12], target = 2
 * Output: -1
 * Explanation: 2 does not exist in nums so return -1
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * You may assume that all elements in nums are unique.
 * n will be in the range [1, 10000].
 * The value of each element in nums will be in the range [-9999, 9999].
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
       return binary_search(nums, target, 0, nums.size()-1); 
    }
private:
    int binary_search(vector<int>& v, int target, int low, int high) {
       while(low <= high) {
           int mid = low + (high - low) / 2;
           if(v[mid] == target) return mid;
           else if(v[mid] < target) {
               low = mid + 1;
           }
           else {
               high = mid - 1;
           }
       }
       return -1;
    }
};
// @lc code=end

