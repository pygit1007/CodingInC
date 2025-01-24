#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    int val;
    struct node *right;  
};

void add_node_end(struct node **head, int no)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head;

    newnode->val = no;
    newnode->left = NULL;
    newnode->right = NULL;

    if(*head == NULL)
    {
        // New list
        *head = newnode;
    }
    else
    {
        while(temp->right != NULL)
        {
            temp = temp->right;
        }
        newnode->left = temp;
        temp->right = newnode;
    }

    return;
}

void main()
{
    struct node *head = NULL;

    add_node_end(&head, 3);
    add_node_end(&head, 6);
    add_node_end(&head, 1);
    add_node_end(&head, 2);
    printf("\nAfter adding nodes: 3, 6, 1, 2");
}