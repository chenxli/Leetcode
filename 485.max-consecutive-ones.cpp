/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 *
 * https://leetcode.com/problems/max-consecutive-ones/description/
 *
 * algorithms
 * Easy (55.45%)
 * Likes:    442
 * Dislikes: 337
 * Total Accepted:    160.6K
 * Total Submissions: 287.8K
 * Testcase Example:  '[1,0,1,1,0,1]'
 *
 * Given a binary array, find the maximum number of consecutive 1s in this
 * array.
 * 
 * Example 1:
 * 
 * Input: [1,1,0,1,1,1]
 * Output: 3
 * Explanation: The first two digits or the last three digits are consecutive
 * 1s.
 * ⁠   The maximum number of consecutive 1s is 3.
 * 
 * 
 * 
 * Note:
 * 
 * The input array will only contain 0 and 1.
 * The length of input array is a positive integer and will not exceed 10,000
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
                if(maxLen < cnt) maxLen = cnt;
            }
            else if(nums[i] == 0){
                if(cnt > maxLen) 
                   maxLen = cnt;
                cnt = 0;
            }
        }
        return maxLen;
    }
};
// @lc code=end

