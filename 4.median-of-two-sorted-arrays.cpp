/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 *
 * https://leetcode.com/problems/median-of-two-sorted-arrays/description/
 *
 * algorithms
 * Hard (27.00%)
 * Likes:    4772
 * Dislikes: 683
 * Total Accepted:    481.9K
 * Total Submissions: 1.8M
 * Testcase Example:  '[1,3]\n[2]'
 *
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.
 * 
 * Find the median of the two sorted arrays. The overall run time complexity
 * should be O(log (m+n)).
 * 
 * You may assume nums1 and nums2 cannot be both empty.
 * 
 * Example 1:
 * 
 * 
 * nums1 = [1, 3]
 * nums2 = [2]
 * 
 * The median is 2.0
 * 
 * 
 * Example 2:
 * 
 * 
 * nums1 = [1, 2]
 * nums2 = [3, 4]
 * 
 * The median is (2 + 3)/2 = 2.5
 * 
 * 
 */
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]) v.push_back(nums1[i++]);
            else v.push_back(nums2[j++]);
        }
        while(i < nums1.size()) v.push_back(nums1[i++]);
        while(j < nums2.size()) v.push_back(nums2[j++]);
        int size = v.size();
        if(size % 2 == 0) return (v[size / 2 - 1] + v[size / 2]) / 2.0;
        else return v[size / 2] * 1.0;
    }
};

