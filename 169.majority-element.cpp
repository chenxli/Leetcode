/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 *
 * https://leetcode.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (53.91%)
 * Likes:    2023
 * Dislikes: 178
 * Total Accepted:    445.7K
 * Total Submissions: 819.1K
 * Testcase Example:  '[3,2,3]'
 *
 * Given an array of size n, find the majority element. The majority element is
 * the element that appears more than ⌊ n/2 ⌋ times.
 * 
 * You may assume that the array is non-empty and the majority element always
 * exist in the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,2,3]
 * Output: 3
 * 
 * Example 2:
 * 
 * 
 * Input: [2,2,1,1,1,2,2]
 * Output: 2
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int i;
        for(i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > nums.size() / 2)
              break;
        }
        return nums[i];
    }
};
// @lc code=end

