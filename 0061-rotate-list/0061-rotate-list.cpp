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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode* tail = head;
        int len =1;
        
        while(tail->next!=NULL){
            tail= tail->next;
            len++;
        }
        k=k%len;
         if(k==0||head==NULL) return head;
        tail->next = head;
       int need = len - k;
        if(need<=0) need =( -need);
      
        tail =head;
        
        for(int i =0 ;i<need-1;i++){
            tail=tail->next;
           
        }
        head = tail->next;
        tail->next=NULL;
        return head;
    }
};