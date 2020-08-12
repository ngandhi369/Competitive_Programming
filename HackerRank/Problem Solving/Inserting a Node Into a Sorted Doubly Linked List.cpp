

// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp=new DoublyLinkedListNode(data);
    DoublyLinkedListNode* t=head;
    if(head->data > data)
    {
        temp->next=head;
        return temp;
    }
    while(head->next!=NULL && head->next->data < data)
    {
        head=head->next;
    }
    if(head->next==NULL)
    {
        head->next=temp;
        return t;
    }
    head->next->prev=temp;
    temp->next=head->next;
    temp->prev=head;
    head->next=temp;
    return t;
}

