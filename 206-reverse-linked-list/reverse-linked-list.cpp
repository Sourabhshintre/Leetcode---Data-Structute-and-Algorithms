class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* prev =NULL;
        ListNode* curr=head;
        ListNode* forword= curr->next;

        while(curr != NULL)
        {
            forword = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forword;
        }
        return prev;
    }
};