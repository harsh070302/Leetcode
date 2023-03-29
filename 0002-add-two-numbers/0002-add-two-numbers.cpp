
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        int carry=0;
        
        while(l1!=NULL || l2!=NULL || carry==1){
            int s=0;
            if(l1!=NULL){
                s+=l1->val;
                l1=l1->next;
            }
             if(l2!=NULL){
                s+=l2->val;
                l2=l2->next;
            }
            s+=carry;
            carry=s/10;
            ListNode* node=new ListNode(s%10);
            curr->next=node;
            curr=curr->next;
            
        }
        return dummy->next;
    }
};