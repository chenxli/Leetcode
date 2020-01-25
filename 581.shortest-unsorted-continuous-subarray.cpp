/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 *
 * https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
 *
 * algorithms
 * Easy (30.43%)
 * Likes:    1922
 * Dislikes: 92
 * Total Accepted:    91.9K
 * Total Submissions: 300.2K
 * Testcase Example:  '[2,6,4,8,10,9,15]'
 *
 * Given an integer array, you need to find one continuous subarray that if you
 * only sort this subarray in ascending order, then the whole array will be
 * sorted in ascending order, too.  
 * 
 * You need to find the shortest such subarray and output its length.
 * 
 * Example 1:
 * 
 * Input: [2, 6, 4, 8, 10, 9, 15]
 * Output: 5
 * Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make
 * the whole array sorted in ascending order.
 * 
 * 
 * 
 * Note:
 * 
 * Then length of the input array is in range [1, 10,000].
 * The input array may contain duplicates, so ascending order here means . 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        int cnt = 0;
        int first = 0;
        bool flag = true;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != v[i]) {
                if(flag) {
                    flag = false;
                    first = i;
                }
                else {
                    cnt = i - first + 1;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end

