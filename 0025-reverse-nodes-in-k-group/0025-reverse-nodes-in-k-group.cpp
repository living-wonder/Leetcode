class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        
        int len = 0;
        ListNode* tempHead = head;
        while (tempHead != nullptr) {
            len++;
            tempHead = tempHead->next;
        }
        
        for (int i = 0; i < len / k; i++) {
            ListNode* nextGroupHead = pre->next;
            for (int j = 1; j < k; j++) {
                if (nextGroupHead == nullptr || nextGroupHead->next == nullptr)
                    break; // If not enough nodes for a group of k, break
                ListNode* temp = pre->next;
                pre->next = nextGroupHead->next;
                nextGroupHead->next = pre->next->next;
                pre->next->next = temp;
            }
            pre = nextGroupHead;
        }
        return dummy->next;
    }
};
