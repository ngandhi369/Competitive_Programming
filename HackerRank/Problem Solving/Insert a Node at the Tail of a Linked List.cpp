

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* ptr=head;
    SinglyLinkedListNode* temp=new SinglyLinkedListNode(data);
    if(ptr==NULL)
        head=temp;
    else
    {
        while(ptr->next!=nullptr)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    return head;
}

