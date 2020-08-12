

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* curr=head,*prev=NULL,*fo=NULL;
    while(curr!=NULL)
    {   
        fo=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fo;
    }    
    head=prev;
    return head;
}

