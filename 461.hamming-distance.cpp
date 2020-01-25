/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 *
 * https://leetcode.com/problems/hamming-distance/description/
 *
 * algorithms
 * Easy (70.61%)
 * Likes:    1451
 * Dislikes: 139
 * Total Accepted:    269.4K
 * Total Submissions: 380.3K
 * Testcase Example:  '1\n4'
 *
 * The Hamming distance between two integers is the number of positions at
 * which the corresponding bits are different.
 * 
 * Given two integers x and y, calculate the Hamming distance.
 * 
 * Note:
 * 0 ≤ x, y < 2^31.
 * 
 * 
 * Example:
 * 
 * Input: x = 1, y = 4
 * 
 * Output: 2
 * 
 * Explanation:
 * 1   (0 0 0 1)
 * 4   (0 1 0 0)
 * ⁠      ↑   ↑
 * 
 * The above arrows point to positions where the corresponding bits are
 * different.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int x_bit, y_bit;
        int distance = 0;
        for(int i = 0; i < 32; i++){
            x_bit = x % 2;
            y_bit = y % 2;
            x /= 2;
            y /= 2;
            distance += x_bit == y_bit ? 0 : 1;
        }
        return distance;
    }
};
// @lc code=end

