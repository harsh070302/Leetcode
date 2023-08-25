
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode dummy = ListNode(0, head);
        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        fast = slow->next;
        slow->next = fast->next;
        delete fast;
        return dummy.next;
    }
};