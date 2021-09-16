// problem lunk:https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA = headA, *ptrB = headB;
while (ptrA != ptrB) {
ptrA = ptrA ? ptrA->next : headB;
ptrB = ptrB ? ptrB->next : headA;
}
return ptrA;
    }
};

//Alternative way
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0,lenB=0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=NULL){
            tempA=tempA->next;
            lenA++;
        }
        while(tempB!=NULL){
            tempB=tempB->next;
            lenB++;
        }
        int d;
        ListNode* ptr1;
        ListNode* ptr2;
        if(lenA>lenB){
            d=lenA-lenB;
            ptr1 = headA;
            ptr2 = headB;
        }
        else{
            d=lenB-lenA;
            ptr1 = headB;
            ptr2 = headA;
        }
        while(d){
            ptr1=ptr1->next;
            if(ptr1 == NULL){
                return NULL;
            }
            d--;
        }
        while(ptr1 != NULL && ptr2!= NULL){
            if(ptr1 == ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
    }
};
