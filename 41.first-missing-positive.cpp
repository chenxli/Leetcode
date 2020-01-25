/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 *
 * https://leetcode.com/problems/first-missing-positive/description/
 *
 * algorithms
 * Hard (29.60%)
 * Likes:    2098
 * Dislikes: 646
 * Total Accepted:    244.5K
 * Total Submissions: 820.8K
 * Testcase Example:  '[1,2,0]'
 *
 * Given an unsorted integer array, find the smallest missing positive
 * integer.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,0]
 * Output: 3
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [3,4,-1,1]
 * Output: 2
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: [7,8,9,11,12]
 * Output: 1
 * 
 * 
 * Note:
 * 
 * Your algorithm should run in O(n) time and uses constant extra space.
 * 
 */
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size+1,0);
        for(int i = 0; i < size; i++){
            if(nums[i] > 0 && nums[i] <= size)
               v[nums[i]] = 1;
        }
        for(int i = 1; i <= size; i++){
            if(v[i] == 0)
              return i;
        }
        return size + 1;
    }
};

