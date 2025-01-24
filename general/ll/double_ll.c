#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int val;
    struct node *next;  
};

void add_node_end(struct node **head, int no)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head;

    newnode->val = no;
    newnode->prev = NULL;
    newnode->next = NULL;

    if(*head == NULL)
    {
        // New list
        *head = newnode;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }

    return;
}

void add_node_middle(struct node **head, int after, int no)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *curr = *head;

    newnode->val = no;
    newnode->prev = NULL;
    newnode->next = NULL;

    if(curr == NULL)
    {
        printf("List is empty!!! Not ok!!!!");
    }
    else
    {
        while(curr != NULL)
        {
            if(curr->val == after)
            {
                newnode->next = curr->next;
                curr->next = newnode;
                newnode->prev = curr;
            }
            curr = curr->next;
        }
    }

    return;
}


void delete_node(struct node **head, int no)
{
    struct node *curr = *head;
    struct node *prev = NULL;

    if(curr == NULL)
    {
        printf("List is empty!!! Not ok!!!!");
    }
    else
    {
        while(curr != NULL)
        {
            if(curr->val == no)
            {
                prev->next = curr->next;
                free(curr);
                return;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }
}

void print_list(struct node **head)
{
    struct node *temp = *head;

    while(temp != NULL)
    {
        printf("\n%d", temp->val);
        temp = temp->next;
    }
    printf("\n");
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
    print_list(&head);

    add_node_middle(&head, 6, 4);
    printf("\nAfter adding node 4 in the middle:");
    print_list(&head);

    delete_node(&head, 6);
    printf("\nAfter deleting node 6 in the middle:");
    print_list(&head);

    return;
}