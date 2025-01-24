
#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
};

void add_node_end(struct node **head, int no)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head;

    newnode->val = no;
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
        temp->next = newnode;
    }

    return;
}

void add_node_middle(struct node *head, int no)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->val = no;
    newnode->next = NULL;

    if(head == NULL)
    {
        printf("List is empty!!! Not ok!!!!");
    }
    else
    {
        newnode->next = head->next;
        head->next = newnode;
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
        while(curr->next != NULL)
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

void sort_list(struct node **head)
{
    struct node *curr = *head;
    struct node *ptr = NULL;
    int tmp = 0;

    while(curr != NULL)
    {
        ptr = curr->next;
        while(ptr != NULL)
        {
            if(curr->val > ptr->val)
            {
                tmp = curr->val;
                curr->val = ptr->val;
                ptr->val = tmp;
            }
            ptr = ptr->next;
        }
        curr = curr->next;
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

    add_node_middle(head, 4);
    printf("\nAfter adding node 4 in the middle:");
    print_list(&head);

    delete_node(&head, 6);
    printf("\nAfter deleting node 6 in the middle:");
    print_list(&head);

    sort_list(&head);
    printf("\nAfter sorting:");
    print_list(&head);

    return;
}