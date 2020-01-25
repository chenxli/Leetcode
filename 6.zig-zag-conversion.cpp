/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 *
 * https://leetcode.com/problems/zigzag-conversion/description/
 *
 * algorithms
 * Medium (33.03%)
 * Likes:    1164
 * Dislikes: 3542
 * Total Accepted:    353.4K
 * Total Submissions: 1.1M
 * Testcase Example:  '"PAYPALISHIRING"\n3'
 *
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
 * of rows like this: (you may want to display this pattern in a fixed font for
 * better legibility)
 * 
 * 
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * 
 * 
 * And then read line by line: "PAHNAPLSIIGYIR"
 * 
 * Write the code that will take a string and make this conversion given a
 * number of rows:
 * 
 * 
 * string convert(string s, int numRows);
 * 
 * Example 1:
 * 
 * 
 * Input: s = "PAYPALISHIRING", numRows = 3
 * Output: "PAHNAPLSIIGYIR"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "PAYPALISHIRING", numRows = 4
 * Output: "PINALSIGYAHRPI"
 * Explanation:
 * 
 * P     I    N
 * A   L S  I G
 * Y A   H R
 * P     I
 * 
 */
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<vector<char> > v(numRows,vector<char>(s.size(),' '));
        int i = 0, j = 0, k = 0;
        while(k < s.size()){
            while(i < numRows && k < s.size()){
                v[i++][j] = s[k++];
            }
            i--;
            while(i > 0 && k < s.size()){
                v[--i][++j] = s[k++];
            }
            i++;
        }
        string str = "";
        for(int m = 0; m < numRows; m++){
            for(int n = 0; n < v[m].size(); n++){
                if(v[m][n] != ' '){
                    str += v[m][n];
                }
            }
        }
        return str;
    }
};

