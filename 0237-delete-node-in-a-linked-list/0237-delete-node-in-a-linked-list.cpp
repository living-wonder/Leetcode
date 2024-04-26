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
    void deleteNode(ListNode* node) {
        ListNode* nexts = node->next ;
        node->val = nexts->val;
        node->next = nexts->next;
        nexts->next=NULL;
        delete(nexts);
        
    }
};