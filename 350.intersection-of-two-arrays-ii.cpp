/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 *
 * https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
 *
 * algorithms
 * Easy (48.81%)
 * Likes:    877
 * Dislikes: 305
 * Total Accepted:    252.7K
 * Total Submissions: 511K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2,2]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [4,9]
 * 
 * 
 * Note:
 * 
 * 
 * Each element in the result should appear as many times as it shows in both
 * arrays.
 * The result can be in any order.
 * 
 * 
 * Follow up:
 * 
 * 
 * What if the given array is already sorted? How would you optimize your
 * algorithm?
 * What if nums1's size is small compared to nums2's size? Which algorithm is
 * better?
 * What if elements of nums2 are stored on disk, and the memory is limited such
 * that you cannot load all elements into the memory at once?
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        if(nums1.size() <= nums2.size()){
            for (int i = 0; i < nums1.size(); i++)
            {
                int num1 = count(nums1.begin(), nums1.end(), nums1[i]);
                int num2 = count(nums2.begin(), nums2.end(), nums1[i]);
                int minNum = min(num1, num2);
                if (find(v.begin(), v.end(), nums1[i]) == v.end())
                {
                    while (minNum)
                    {
                        v.push_back(nums1[i]);
                        minNum--;
                    }
                }
            }
        }
        else{
            for (int i = 0; i < nums2.size(); i++)
            {
                int num1 = count(nums1.begin(), nums1.end(), nums2[i]);
                int num2 = count(nums2.begin(), nums2.end(), nums2[i]);
                int minNum = min(num1, num2);
                if (find(v.begin(), v.end(), nums2[i]) == v.end())
                {
                    while (minNum)
                    {
                        v.push_back(nums2[i]);
                        minNum--;
                    }
                }
            }
        }
        
        return v;
    }
};
// @lc code=end

