/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (61.29%)
 * Likes:    2903
 * Dislikes: 110
 * Total Accepted:    540.2K
 * Total Submissions: 876.7K
 * Testcase Example:  '[2,2,1]'
 *
 * Given a non-empty array of integers, every element appears twice except for
 * one. Find that single one.
 * 
 * Note: 
 * 
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 * 
 * Example 1:
 * 
 * 
 * Input: [2,2,1]
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,1,2,1,2]
 * Output: 4
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(int i = 0; i < nums.size(); i++){
            a = a ^ nums[i];
        }
        return a;
        // map<int,int> mp;
        // for(int i = 0; i < nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // map<int,int>::iterator it = mp.begin();
        // while(it != mp.end()){
        //     if(it->second == 1)
        //       break;
        //     it++;
        // }
        // return it->first;
    }
};
// @lc code=end

