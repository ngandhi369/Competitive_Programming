

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* t=head, *t1=head;
    int c=0,x=0;
    if(t1==NULL)
    {
        return -1;
    }
    while(t1!=NULL)
    {
        c++;
        t1=t1->next;
    }
    while(c-positionFromTail)
    {
        x=t->data;
        t=t->next;
        ++positionFromTail;
    }
    return x;
}

