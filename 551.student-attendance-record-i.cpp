/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 *
 * https://leetcode.com/problems/student-attendance-record-i/description/
 *
 * algorithms
 * Easy (45.55%)
 * Likes:    188
 * Dislikes: 693
 * Total Accepted:    65.2K
 * Total Submissions: 141.1K
 * Testcase Example:  '"PPALLP"'
 *
 * You are given a string representing an attendance record for a student. The
 * record only contains the following three characters:
 * 
 * 
 * 
 * 'A' : Absent. 
 * 'L' : Late.
 * ⁠'P' : Present. 
 * 
 * 
 * 
 * 
 * A student could be rewarded if his attendance record doesn't contain more
 * than one 'A' (absent) or more than two continuous 'L' (late).    
 * 
 * You need to return whether the student could be rewarded according to his
 * attendance record.
 * 
 * Example 1:
 * 
 * Input: "PPALLP"
 * Output: True
 * 
 * 
 * 
 * Example 2:
 * 
 * Input: "PPALLL"
 * Output: False
 * 
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int A = 0, L = 0;
        bool flag = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A') A++;
            else if(s[i] == 'L'){
                if(i - 1 >= 0 && s[i-1] == 'L')
                  L++;
                else L = 1;
                if(L > 2) flag = true;
            }
        }
        if(A <= 1 && !flag) return true;
        else return false;
    }
};
// @lc code=end

