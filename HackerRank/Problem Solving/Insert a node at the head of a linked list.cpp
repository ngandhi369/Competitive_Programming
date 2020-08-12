

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* ptr=new SinglyLinkedListNode(data);
    if(llist==NULL)
    {
        llist=ptr;
        return llist;
    }
    ptr->next=llist;
    return ptr;
}

