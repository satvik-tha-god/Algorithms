class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr,*nextnode,*prev;
        if(!head) return head;
        curr=head;
        prev=NULL;
        nextnode=curr->next;

        while(curr){
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            if(nextnode) nextnode=curr->next;
        }

        return prev;
    }
};
