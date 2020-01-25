/*
 * @lc app=leetcode id=475 lang=cpp
 *
 * [475] Heaters
 *
 * https://leetcode.com/problems/heaters/description/
 *
 * algorithms
 * Easy (32.20%)
 * Likes:    561
 * Dislikes: 614
 * Total Accepted:    55.1K
 * Total Submissions: 169.7K
 * Testcase Example:  '[1,2,3]\n[2]'
 *
 * Winter is coming! Your first job during the contest is to design a standard
 * heater with fixed warm radius to warm all the houses.
 * 
 * Now, you are given positions of houses and heaters on a horizontal line,
 * find out minimum radius of heaters so that all houses could be covered by
 * those heaters.
 * 
 * So, your input will be the positions of houses and heaters seperately, and
 * your expected output will be the minimum radius standard of heaters.
 * 
 * Note:
 * 
 * 
 * Numbers of houses and heaters you are given are non-negative and will not
 * exceed 25000.
 * Positions of houses and heaters you are given are non-negative and will not
 * exceed 10^9.
 * As long as a house is in the heaters' warm radius range, it can be
 * warmed.
 * All the heaters follow your radius standard and the warm radius will the
 * same.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3],[2]
 * Output: 1
 * Explanation: The only heater was placed in the position 2, and if we use the
 * radius 1 standard, then all the houses can be warmed.
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [1,2,3,4],[1,4]
 * Output: 1
 * Explanation: The two heater was placed in the position 1 and 4. We need to
 * use radius 1 standard, then all the houses can be warmed.
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        if(heaters.size() == 0) return 0;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int res = 0;
        int ht = 0;
        for(int h : houses) {
            while(ht + 1 < heaters.size() && abs(h - heaters[ht]) >= abs(h - heaters[ht+1])) {
                ht++;
            }
            res = max(res, abs(h - heaters[ht]));
        }
        return res;
        // int res = 0;
        // for(int i = 0; i < houses.size(); i++) {
        //     int curDist = INT_MAX;
        //     for(int j = 0; j < heaters.size(); j++) {
        //         if(abs(houses[i] - heaters[j]) < curDist) curDist = abs(houses[i] - heaters[j]);
        //     }
        //     if(curDist > res) res = curDist;
        // }
        // return res;
    }
};
// @lc code=end

