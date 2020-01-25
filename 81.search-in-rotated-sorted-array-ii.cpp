/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 *
 * https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
 *
 * algorithms
 * Medium (32.74%)
 * Likes:    888
 * Dislikes: 378
 * Total Accepted:    200.5K
 * Total Submissions: 610.6K
 * Testcase Example:  '[2,5,6,0,0,1,2]\n0'
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand.
 * 
 * (i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).
 * 
 * You are given a target value to search. If found in the array return true,
 * otherwise return false.
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [2,5,6,0,0,1,2], target = 0
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [2,5,6,0,0,1,2], target = 3
 * Output: false
 * 
 * Follow up:
 * 
 * 
 * This is a follow up problem to Search in Rotated Sorted Array, where nums
 * may contain duplicates.
 * Would this affect the run-time complexity? How and why?
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i = 0, j = 0;
        for(int k = 1; k < nums.size(); k++){
            if(nums[k] < nums[k - 1]){
                j = k;
                break;
            }
        }
        return searchHelper(nums,i,j-1,target) || searchHelper(nums,j,nums.size()-1,target);
    }
private:
    bool searchHelper(vector<int>& v, int start, int end, int target){
        if(start <= end){
            int mid = (start + end) / 2;
            if(v[mid] == target){
                return true;
            }
            else if(v[mid] > target){
                return searchHelper(v, start, mid - 1, target);
            }
            else {
                return searchHelper(v, mid + 1, end, target);
            }
        }
        return false;
    }
};
// @lc code=end

