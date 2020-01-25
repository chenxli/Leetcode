/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 *
 * https://leetcode.com/problems/spiral-matrix/description/
 *
 * algorithms
 * Medium (31.25%)
 * Likes:    1398
 * Dislikes: 453
 * Total Accepted:    271.8K
 * Total Submissions: 860.3K
 * Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
 *
 * Given a matrix of m x n elements (m rows, n columns), return all elements of
 * the matrix in spiral order.
 * 
 * Example 1:
 * 
 * 
 * Input:
 * [
 * ⁠[ 1, 2, 3 ],
 * ⁠[ 4, 5, 6 ],
 * ⁠[ 7, 8, 9 ]
 * ]
 * Output: [1,2,3,6,9,8,7,4,5]
 * 
 * 
 * Example 2:
 * 
 * Input:
 * [
 * ⁠ [1, 2, 3, 4],
 * ⁠ [5, 6, 7, 8],
 * ⁠ [9,10,11,12]
 * ]
 * Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m == 0) return res;
        if(m == 1) return matrix[0];
        int n = matrix[0].size();
        int temp = 0;
        int i = 0, j = -1;
        int arr[m][n];
        fill(arr[0],arr[0]+m*n,0);
        while(temp < m*n){
            while(j + 1 < n && !arr[i][j+1]){
                j++;
                res.push_back(matrix[i][j]);
                arr[i][j] = 1;
                temp++;
            }
            while(i + 1 < m && !arr[i+1][j]){
                i++;
                res.push_back(matrix[i][j]);
                arr[i][j] = 1;
                temp++;
            }
            while(j - 1 >= 0 && !arr[i][j-1]){
                j--;
                res.push_back(matrix[i][j]);
                arr[i][j] = 1;
                temp++;
            }
            while(i - 1 >= 0 && !arr[i-1][j]){
                i--;
                res.push_back(matrix[i][j]);
                arr[i][j] = 1;
                temp++;
            }
        }
        return res;
    }
};
// @lc code=end

