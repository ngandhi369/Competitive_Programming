

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
        SinglyLinkedListNode* temp=head;
        int flag=0;
        if(flag==position)
        {
            head=head->next;
            return head;
        }
        ++flag;
        while(flag!=position)
        {
            ++flag;
            temp=temp->next;
        }
        SinglyLinkedListNode* n=temp->next;
        temp->next=n->next;
        delete(n);
    return head;
}

