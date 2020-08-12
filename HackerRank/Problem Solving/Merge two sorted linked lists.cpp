

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* t1, SinglyLinkedListNode* t2) {
    SinglyLinkedListNode* result=NULL;
    if(t1==NULL)
        return t2;
    if(t2==NULL)
        return t1;

        if(t1->data > t2->data){
            result = t2;
            result->next=mergeLists(t1,t2->next);
        }
        else{
            result = t1;
            result->next=mergeLists(t1->next,t2);
        }
    return result;
}

