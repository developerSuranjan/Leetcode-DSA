class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode less(0),great(0);
        ListNode* lesser=&less;
        ListNode* greater=&great;
        while(head){
            if(head->val<x){
                lesser->next=head;
                lesser=head;
            }else{
                greater->next=head;
                greater=head;
            }
            head=head->next;
        }
        greater->next=nullptr;
        lesser->next=great.next;
        return less.next;
    }
};