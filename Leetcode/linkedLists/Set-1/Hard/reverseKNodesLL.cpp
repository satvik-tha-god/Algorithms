// problem link:https://leetcode.com/problems/reverse-nodes-in-k-group/
class Solution {
public:
ListNode* reverseKGroup(ListNode* head, int k) {
ListNode *start,*curr,*prev,*nxt,*bef_start;
//count number of nodes in list
int n=0;
curr=head;
while(curr)
{
n++;
curr=curr->next;
}
//initialize the pointers
curr = head;
prev = NULL;
nxt = curr->next;
int num_times = n/k; //number of groups
for(int i=0;i<num_times;i++)
{
int temp = k; //number of nodes to be reversed
bef_start = start;// points to last element of previous group
start = curr; //assign start as the first element in non-reversed group
while(temp--) //same as in Q2
{
curr->next=prev;
prev=curr;
curr=nxt;
if(nxt) nxt=nxt->next;
}
if(i==0) // update head in first iteration
{
head=prev;
}
else // update the ‘next’ of last element of the previous group
{
bef_start->next=prev;
}
//update prev as group is now reversed
prev=start;
//update as start has become the
//last element in the group after reversing
start->next=curr;
}
return head;
}
};
