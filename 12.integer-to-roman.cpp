/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 *
 * https://leetcode.com/problems/integer-to-roman/description/
 *
 * algorithms
 * Medium (51.93%)
 * Likes:    664
 * Dislikes: 2066
 * Total Accepted:    258.1K
 * Total Submissions: 497K
 * Testcase Example:  '3'
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D
 * and M.
 * 
 * 
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
 * 
 * For example, two is written as II in Roman numeral, just two one's added
 * together. Twelve is written as, XII, which is simply X + II. The number
 * twenty seven is written as XXVII, which is XX + V + II.
 * 
 * Roman numerals are usually written largest to smallest from left to right.
 * However, the numeral for four is not IIII. Instead, the number four is
 * written as IV. Because the one is before the five we subtract it making
 * four. The same principle applies to the number nine, which is written as IX.
 * There are six instances where subtraction is used:
 * 
 * 
 * I can be placed before V (5) and X (10) to make 4 and 9. 
 * X can be placed before L (50) and C (100) to make 40 and 90. 
 * C can be placed before D (500) and M (1000) to make 400 and 900.
 * 
 * 
 * Given an integer, convert it to a roman numeral. Input is guaranteed to be
 * within the range from 1 to 3999.
 * 
 * Example 1:
 * 
 * 
 * Input: 3
 * Output: "III"
 * 
 * Example 2:
 * 
 * 
 * Input: 4
 * Output: "IV"
 * 
 * Example 3:
 * 
 * 
 * Input: 9
 * Output: "IX"
 * 
 * Example 4:
 * 
 * 
 * Input: 58
 * Output: "LVIII"
 * Explanation: L = 50, V = 5, III = 3.
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: 1994
 * Output: "MCMXCIV"
 * Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 * 
 */
class Solution {
public:
    string intToRoman(int num) {
        int index = 0;
        string s;
        int nums[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string romans[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        while(index < 13){
            while(num >= nums[index]){
                s += romans[index];
                num -= nums[index];
            }
            index++;
        }
        return s;
        // map<int,string> mp;
        // mp[1] = "I";
        // mp[5] = "V";
        // mp[4] = "IV";
        // mp[10] = "X";
        // mp[9] = "IX";
        // mp[50] = "L";
        // mp[40] = "XL";
        // mp[100] = "C";
        // mp[90] = "XC";
        // mp[500] = "D";
        // mp[400] = "CD";
        // mp[1000] = "M";
        // mp[900] = "CM";
        // string s;
        // while(num >= 1000){
        //     s += mp[1000];
        //     num -= 1000;
        // }
        // while(num >= 900){
        //     s += mp[900];
        //     num -= 900;
        // }
        // while(num >= 500){
        //     s += mp[500];
        //     num -= 500;
        // }
        // while(num >= 400){
        //     s += mp[400];
        //     num -= 400;
        // }
        // while(num >= 100){
        //     s += mp[100];
        //     num -= 100;
        // }
        // while(num >= 90){
        //     s += mp[90];
        //     num -= 90;
        // }
        // while(num >= 50){
        //     s += mp[50];
        //     num -= 50;
        // }
        // while(num >= 40){
        //     s += mp[40];
        //     num -= 40;
        // }
        // while(num >= 10){
        //     s += mp[10];
        //     num -= 10;
        // }
        // while(num >= 9){
        //     s += mp[9];
        //     num -= 9;
        // }
        // while(num >= 5){
        //     s += mp[5];
        //     num -= 5;
        // }
        // while(num >= 4){
        //     s += mp[4];
        //     num -= 4;
        // }
        // while(num >= 1){
        //     s += mp[1];
        //     num--;
        // }
        // return s;
    }
};

