/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 *
 * https://leetcode.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (47.66%)
 * Likes:    869
 * Dislikes: 84
 * Total Accepted:    293.6K
 * Total Submissions: 608.9K
 * Testcase Example:  '5'
 *
 * Given a non-negative integer numRows, generate the first numRows of Pascal's
 * triangle.
 * 
 * 
 * In Pascal's triangle, each number is the sum of the two numbers directly
 * above it.
 * 
 * Example:
 * 
 * 
 * Input: 5
 * Output:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j <= i; j++){
                v[i].push_back(1);
            }
        }
        if(numRows <= 2) return v;
        for(int i = 2; i < numRows; i++){
            for(int j = 1; j < i; j++){
                v[i][j] = v[i-1][j]+v[i-1][j-1];
            }
        }
        return v;
    }
};
// @lc code=end

