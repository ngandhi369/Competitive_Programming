

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* cur=head,*tmp=NULL,*prev=NULL;
    if(head==NULL)
        return head;
    while(cur!=NULL)
    {
        tmp=cur->next;
        cur->next=prev;
        prev=cur;        
        cur=tmp;
    }
    return prev;
}
