/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 *
 * https://leetcode.com/problems/relative-ranks/description/
 *
 * algorithms
 * Easy (48.83%)
 * Likes:    209
 * Dislikes: 436
 * Total Accepted:    48.4K
 * Total Submissions: 98.1K
 * Testcase Example:  '[5,4,3,2,1]'
 *
 * 
 * Given scores of N athletes, find their relative ranks and the people with
 * the top three highest scores, who will be awarded medals: "Gold Medal",
 * "Silver Medal" and "Bronze Medal".
 * 
 * Example 1:
 * 
 * Input: [5, 4, 3, 2, 1]
 * Output: ["Gold Medal", "Silver Medal", "Bronze Medal", "4", "5"]
 * Explanation: The first three athletes got the top three highest scores, so
 * they got "Gold Medal", "Silver Medal" and "Bronze Medal". For the left two
 * athletes, you just need to output their relative ranks according to their
 * scores.
 * 
 * 
 * 
 * Note:
 * 
 * N is a positive integer and won't exceed 10,000.
 * All the scores of athletes are guaranteed to be unique.
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i;
        }
        vector<string> v(nums.size());
        auto it = mp.begin();
        int cnt = 0;
        while(it != mp.end()){
            int index = it->second;
            int rank = nums.size() - cnt;
            if(rank == 1)
                v[index] = "Gold Medal";
            else if(rank == 2)
                v[index] = "Silver Medal";
            else if(rank == 3)
                v[index] = "Bronze Medal";
            else
                v[index] = to_string(rank);
            cnt++;
            it++;
        }
        return v;
    }
};
// @lc code=end

