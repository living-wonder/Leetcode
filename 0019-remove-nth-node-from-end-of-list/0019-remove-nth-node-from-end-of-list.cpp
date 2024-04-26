/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
       int need = count - n;
        temp = head;
        ListNode* prev = head;
        ListNode* next = NULL;
        for(int i=0;i<need+1;i++){
            prev = temp;
            temp=temp->next;
            next = temp->next;
            
        }
        if(temp==head){
            return head->next;
        }
        prev->next = temp->next;
        temp->next = NULL;
        return head;
        
    }
};