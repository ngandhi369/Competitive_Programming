

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* ptr=new SinglyLinkedListNode(data);
    int flag=0;
    if(flag==position)
    {
        head=ptr;
        return head;
    }
    ++flag;
    while(flag!=position)
    {
        ++flag;
        temp=temp->next;
    }
    SinglyLinkedListNode* n=temp->next;
    temp->next=ptr;
    ptr->next=n;
    return head;
}

