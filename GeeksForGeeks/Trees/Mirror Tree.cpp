/*
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *newNode(int x) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}
*/
void mirror(Node *node) {
    // Code Here
    if(!node) return;
    
    mirror(node->left);
    mirror(node->right);
    
    struct Node* temp = node->left;
    node->left = node->right;
    node->right = temp;
}

