/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 *
 * https://leetcode.com/problems/merge-sorted-array/description/
 *
 * algorithms
 * Easy (36.70%)
 * Likes:    1329
 * Dislikes: 3111
 * Total Accepted:    425.4K
 * Total Submissions: 1.1M
 * Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
 *
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as
 * one sorted array.
 * 
 * Note:
 * 
 * 
 * The number of elements initialized in nums1 and nums2 are m and n
 * respectively.
 * You may assume that nums1 has enough space (size that is greater or equal to
 * m + n) to hold additional elements from nums2.
 * 
 * 
 * Example:
 * 
 * 
 * Input:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 * 
 * Output: [1,2,2,3,5,6]
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> num = nums1;
        while(i < m && j < n){
            if(num[i] < nums2[j]){
                nums1[k++] = num[i++];
            }
            else{
                nums1[k++] = nums2[j++];
            }
        }
        while(i < m){
            nums1[k++] = num[i++];
        }
        while(j < n){
            nums1[k++] = nums2[j++];
        }
    }
};
// @lc code=end

