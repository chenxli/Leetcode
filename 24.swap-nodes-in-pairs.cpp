/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 *
 * https://leetcode.com/problems/swap-nodes-in-pairs/description/
 *
 * algorithms
 * Medium (46.11%)
 * Likes:    1353
 * Dislikes: 120
 * Total Accepted:    349.4K
 * Total Submissions: 757.7K
 * Testcase Example:  '[1,2,3,4]'
 *
 * Given a linked list, swap every two adjacent nodes and return its head.
 * 
 * You may not modify the values in the list's nodes, only nodes itself may be
 * changed.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p = NULL,*q = NULL,*r = NULL;
        if(head && head->next){
            p = head->next;
            head->next = p->next;
            p->next = head;
            head = p;
            p = head->next;
        }
        if(p)
           q = p->next;
        if(q)
           r = p->next->next;
        while(q && r){
            p->next = r;
            q->next = r->next;
            r->next = q;
            p = q;
            q = p->next;
            if(q) r = p->next->next;
            else  r = NULL;
        }
        return head;
    }
};

