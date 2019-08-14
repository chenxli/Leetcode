/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int res = 0;
        int i = 0;
        while(i < s.length()){
            if(i + 1 < s.length()){
                if(mp[s[i]] >= mp[s[i+1]]){
                    res += mp[s[i]];
                    i++;
                }
                else{
                    res = res + (mp[s[i+1]] - mp[s[i]]);
                    i = i + 2;
                }
            }
            else{
                res += mp[s[i]];
                i++;
            }
        }
        return res;
    }
};

