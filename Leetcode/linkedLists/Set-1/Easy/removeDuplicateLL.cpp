// problem link:https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
void removeDuplicates(struct Node* head)
{
    void removeDuplicates(struct Node* head)
{
struct Node* temp = head;
struct Node* prev=head;
while (temp != NULL)
{
if(temp->data != prev->data)
{
prev->next = temp;
prev = temp;
}
temp = temp->next;
}
if(prev != temp)
{
prev->next = NULL;
}
}

}
