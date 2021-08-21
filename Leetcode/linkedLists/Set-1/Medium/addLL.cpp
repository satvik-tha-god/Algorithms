// problem link:https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
ListNode dummy(0);
ListNode* curr=& dummy;
int carry=0 , x , y , sum;
while(l1 or l2){
x=l1?l1->val:0;
y=l2?l2->val:0;
sum=x+y+carry;
carry=sum/10;
curr->next=new ListNode(sum%10);
curr=curr->next;
if(l1) l1=l1->next;
if(l2) l2=l2->next;
}
if(carry==1)
curr->next=new ListNode(carry);
return dummy.next;
}
};
