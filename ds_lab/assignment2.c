// Write a program to create a single linked list with n nodes and perform
// a) insertion at the beginning
// b) insertion at the end
// c) insertion at a specific position
// d) deletion at the beginning
// e) deletion at the end
// f) deletion at a specific position

// DOUBT : The code is running fine in onlin compiler but running an infinite loop in my local machine.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start_insert(struct node **head, int value)
{
    // Allocating memory for a new node
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Initialize the new node
    temp->data = value;
    temp->next = (*head); // Point to the current head
    // Update the head
    (*head) = (temp);
    return (*head);
}
struct node *end_insert(struct node *head, int value)
{
    // Allocate memory
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    struct node *tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }

    // Initializing the new node
    temp->data = value;
    temp->next = NULL;

    tail->next = temp;
    tail = temp;
    return head;
}
struct node *between_insert(struct node *head, int x, int value)
{
    // if x==1
    if (x == 1)
    {
        return start_insert(&head, value);
    }
    struct node *temp = head;
    struct node *ele = (struct node *)malloc(sizeof(struct node));
    ele->data = value;
    x -= 2;
    while (x--)
    {
        temp = temp->next;
    }
    ele->next = temp->next;
    temp->next = ele;
    return head;
}

// traversing the array
void traverse(struct node *head)
{
    if (head == NULL)
    {
        printf("Your linked is empty");
        return;
    }
    struct node *temp = head;
    int i = 1;
    while (temp != NULL)
    {
        printf("element %d is : %d \n", i, temp->data);
        temp = temp->next;
        i++;
    }
}

struct node *head_delete(struct node **head)
{
    if ((*head) == NULL)
    {
        printf("List is already empty.\n");
        return NULL;
    }
    struct node *temp = (*head);
    (*head) = (*head)->next;
    free(temp);

    return (*head);
}

struct node *tail_delete(struct node **head)
{
    // to check presence of listnode
    if ((*head) == NULL)
    {
        printf("List is already empty.\n");
        return NULL;
    }
    // checking if head is the only element
    if ((*head)->next == NULL)
    {
        free(*head);
        return NULL;
    }

    struct node *current = (*head);
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;

    return (*head);
}
struct node *node_delete(struct node **head, int index)
{
    if ((*head) == NULL || index < 1)
    {
        printf("Invalid index or empty list.\n");
        return (*head);
    }
    // If deleting the head node
    if (index == 1)
    {
        return head_delete(&(*head));
    }

    struct node *current = (*head);
    struct node *previous = NULL;

    // Traverse to the node just before the node to be deleted
    for (int i = 1; i < index && current != NULL; i++)
    {
        previous = current;
        current = current->next;
    }

    // If the index is greater than the number of nodes
    if (current == NULL)
    {
        printf("Index is greater then lenght of the listnode.\n");
        return (*head);
    }

    // Delete the node at the given index
    previous->next = current->next;
    free(current);
    return (*head);
}
int main()
{
    // creating a head node
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 15;
    // checking the head node
    traverse(head);
    // after inserting a value at head
    printf("After inserting a node at head\n");
    int value = 55;
    traverse(start_insert(&head, value));
    // after inserting a value at tail
    printf("After inserting a node at end\n");
    value = 9;
    traverse(end_insert(head, value));
    // adding at any index
    printf("After inserting a node at index 2 (1-based indexing) \n");
    value = 122;
    int index = 2;
    traverse(between_insert(head, index, value));
    // deleting head node
    printf("After deleting a node at start\n");
    traverse(head_delete(&head));
    // deleting end node
    printf("After deleting a node at end\n");
    traverse(tail_delete(&head));
    // delete at any given index
    printf("After deleting a node at index 2\n");
    traverse(node_delete(&head, 2));

    return 0;
}