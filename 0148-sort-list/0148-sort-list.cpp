class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
    
        vector<int>v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
    
        temp=head;
        int count=0;
        while(temp){
            temp->val=v[count];
            count++;
            temp=temp->next;
        }
    return head;
    }
};