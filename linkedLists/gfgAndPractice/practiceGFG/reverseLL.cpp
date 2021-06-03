// problem link:https://www.geeksforgeeks.org/reverse-a-linked-list/
void reverse(){
  Node* current=head;
  Node *prev=NULL, *next=NULL;
  while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
}
