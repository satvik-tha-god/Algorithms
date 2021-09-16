void removeDuplicates(struct Node* head) {
    struct Node* temp=head;
    struct Node* prev=head;
    while(temp!=NULL){
        if(temp->data != prev->data){
            prev->next = temp;
            prev = temp;
        }
        temp=temp->next;
        if(prev!= temp){
            prev->next=NULL;
        }
    }

}
