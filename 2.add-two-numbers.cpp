/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (31.58%)
 * Likes:    5846
 * Dislikes: 1507
 * Total Accepted:    991.4K
 * Total Submissions: 3.1M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 * 
 * 
 */
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = new ListNode(0);
        ListNode *head = p;
        int tag = 0;
        while (l1 && l2)
        {
            ListNode *node = new ListNode(0);
            node->val = (l1->val + l2->val + tag) % 10;
            tag = (l1->val + l2->val + tag) / 10;
            p->next = node;
            p = node;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            ListNode *node = new ListNode(0);
            node->val = (l1->val + tag) % 10;
            tag = (l1->val + tag) / 10;
            p->next = node;
            p = node;
            l1 = l1->next;
        }
        while (l2)
        {
            ListNode *node = new ListNode(0);
            node->val = (l2->val + tag) % 10;
            tag = (l2->val + tag) / 10;
            p->next = node;
            p = node;
            l2 = l2->next;
        }
        if (tag)
        {
            ListNode *node = new ListNode(0);
            node->val = tag;
            p->next = node;
        }
        return head->next;
    }
};

