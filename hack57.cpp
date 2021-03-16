#define max(a, b) (a > b ? a : b)

int getHeight(Node *root) {
    if (root == NULL)
        return 0;
    else
        return 1 + max(getHeight(root->left), getHeight(root->right));
}

void printGivenLevel(Node *root, int level) {
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

void levelOrder(Node* root){
  //Write your code here
    int height = getHeight(root);
    int i;
    for (i = 1; i <= height; i++) {
        printGivenLevel(root, i);
    }
}
