/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 *
 * https://leetcode.com/problems/search-in-rotated-sorted-array/description/
 *
 * algorithms
 * Medium (33.13%)
 * Likes:    2918
 * Dislikes: 358
 * Total Accepted:    477K
 * Total Submissions: 1.4M
 * Testcase Example:  '[4,5,6,7,0,1,2]\n0'
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand.
 * 
 * (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).
 * 
 * You are given a target value to search. If found in the array return its
 * index, otherwise return -1.
 * 
 * You may assume no duplicate exists in the array.
 * 
 * Your algorithm's runtime complexity must be in the order of O(log n).
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [4,5,6,7,0,1,2], target = 0
 * Output: 4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [4,5,6,7,0,1,2], target = 3
 * Output: -1
 * 
 */
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        if(nums.size() == 1 && nums[0] == target) return 0;
        int i = 0, j = nums.size()-1;
        while(i < j){
            if(nums[i] < target) i++;
            if(nums[j] > target) j--;
            if(nums[i] == target) return i;
            if(nums[j] == target) return j;
            if(nums[i] > target && nums[j] < target) return -1;
        }
        return -1;
    }
};

