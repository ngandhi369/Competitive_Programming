
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        int l,r;
        if(root==NULL)
            return -1;
        l=height(root->left)+1;
        r=height(root->right)+1;
        if(l>r)
            return l;
        else
            return r;
    }

