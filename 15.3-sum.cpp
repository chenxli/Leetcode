/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (24.52%)
 * Likes:    4272
 * Dislikes: 485
 * Total Accepted:    612.4K
 * Total Submissions: 2.5M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such
 * that a + b + c = 0? Find all unique triplets in the array which gives the
 * sum of zero.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate triplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 0, 1, 2, -1, -4],
 * 
 * A solution set is:
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > v;
        vector<int> vec;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                for(int k = j + 1; k < size; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vec.push_back(nums[i]);
                        vec.push_back(nums[j]);
                        vec.push_back(nums[k]);
                        bool flag = true;
                        for(int z = 0; z < v.size(); z++){
                            unordered_set<int> st;
                            st.insert(v[z][0]);
                            st.insert(v[z][1]);
                            st.insert(v[z][2]);
                            st.insert(vec[0]);
                            st.insert(vec[1]);
                            st.insert(vec[2]);
                            if(st.size() == 3 || st.size() == 1){
                                flag = false;
                                break;
                            }
                        }
                        if(flag){
                            v.push_back(vec);
                        }
                        vec.clear();
                    }
                }
            }
        }
        return v;
    }
};

