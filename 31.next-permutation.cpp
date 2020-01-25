/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 *
 * https://leetcode.com/problems/next-permutation/description/
 *
 * algorithms
 * Medium (30.98%)
 * Likes:    2156
 * Dislikes: 700
 * Total Accepted:    268.9K
 * Total Submissions: 866.6K
 * Testcase Example:  '[1,2,3]'
 *
 * Implement next permutation, which rearranges numbers into the
 * lexicographically next greater permutation of numbers.
 * 
 * If such arrangement is not possible, it must rearrange it as the lowest
 * possible order (ie, sorted in ascending order).
 * 
 * The replacement must be in-place and use only constant extra memory.
 * 
 * Here are some examples. Inputs are in the left-hand column and its
 * corresponding outputs are in the right-hand column.
 * 
 * 1,2,3 → 1,3,2
 * 3,2,1 → 1,2,3
 * 1,1,5 → 1,5,1
 * 
 */
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 0) return;
        int index = nums.size() - 1;
        while(index > 0){
            if(nums[index] <= nums[index-1])
                index--;
            else break;
        }
        if(index == 0)
            sort(nums.begin(),nums.end());
        else{
            int min = nums[index];
            int min_index = index;
            for(int i = index + 1; i < nums.size(); i++){
                if(nums[i] > nums[index-1] && nums[i] <= min){
                    min = nums[i];
                    min_index = i;
                }
            }
            int temp = nums[min_index];
            nums[min_index] = nums[index-1];
            nums[index-1] = temp;
            reverse(nums.begin()+index,nums.end());
        }
    }
};

