/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
 *
 * https://leetcode.com/problems/sort-list/description/
 *
 * algorithms
 * Medium (36.98%)
 * Likes:    1925
 * Dislikes: 99
 * Total Accepted:    219.2K
 * Total Submissions: 571.5K
 * Testcase Example:  '[4,2,1,3]'
 *
 * Sort a linked list in O(n log n) time using constant space complexity.
 * 
 * Example 1:
 * 
 * 
 * Input: 4->2->1->3
 * Output: 1->2->3->4
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: -1->5->3->4->0
 * Output: -1->0->3->4->5
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return NULL;
        vector<int> v;
        ListNode* p = head;
        while(p){
            v.push_back(p->val);
            p = p->next;
        }
        sort(v.begin(), v.end());
        p = head;
        int i = 0;
        while(p){
            p->val = v[i++];
            p = p->next;
        }
        return head;
    }
};
// @lc code=end

