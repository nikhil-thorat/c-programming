#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node *new_node(int value)
{
    // Dynamically allocated the mermoy of size Node
    // malloc returns a pointer to the allocated memory
    Node *node = malloc(sizeof(Node));

    // Way to access variables of Node
    node->value = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main()
{
    Node *node = new_node(1);
    node->left = new_node(2);
    node->right = new_node(3);

    printf("Root : %d\n", node->value);
    printf("Root.Left : %d\n", node->left->value);
    printf("Root.Right : %d\n", node->right->value);
    // Freeing allocated memory
    // Not freeing allocated memory results in memory leaks
    free(node->left);
    free(node->right);
    free(node);

    // Setting pointer to null after freeing, prevents dangling pointer
    node = NULL;

    return 0;
}
