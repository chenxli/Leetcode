/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 *
 * https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 *
 * algorithms
 * Medium (34.12%)
 * Likes:    1989
 * Dislikes: 96
 * Total Accepted:    351.8K
 * Total Submissions: 1M
 * Testcase Example:  '[5,7,7,8,8,10]\n8'
 *
 * Given an array of integers nums sorted in ascending order, find the starting
 * and ending position of a given target value.
 * 
 * Your algorithm's runtime complexity must be in the order of O(log n).
 * 
 * If the target is not found in the array, return [-1, -1].
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [5,7,7,8,8,10], target = 8
 * Output: [3,4]
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [5,7,7,8,8,10], target = 6
 * Output: [-1,-1]
 * 
 */
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        if(nums.size() == 0) return v;
        vector<int>::iterator it = find(nums.begin(),nums.end(),target);
        if(it == nums.end()) return v;
        else{
            v[0] = int(it-nums.begin());
            vector<int>::reverse_iterator iter = find(nums.rbegin(), nums.rend(), target);
            v[1] = (nums.size() - 1 - int(iter - nums.rbegin()) == v[0] ? v[0] : nums.size() - 1 - int(iter - nums.rbegin()));
            return v;
        }
    }
};

