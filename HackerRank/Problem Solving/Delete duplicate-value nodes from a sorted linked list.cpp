

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp=head;
        while (temp!=NULL && temp->next!=NULL)
        {   
            while (temp->next!=NULL && temp->data == temp->next->data)
            {
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }
        return head;
}

