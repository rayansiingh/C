// Write a program to create a single linked list with n nodes and perform
// a) insertion at the beginning
// b) insertion at the end
// c) insertion at a specific position
// d) deletion at the beginning
// e) deletion at the end
// f) deletion at a specific position

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE CREATED
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp;
int count = 0;

// CREATING NEW NODE
struct node *getnode()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

// DISPLAYING LINKED LIST
void display()
{
    if (head == NULL)
    {
        printf("The linked list is empty.\n");
        return;
    }
    temp = head;
    printf("Linked list: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// INSERTION AT THE BEGINNING
void insert_at_beg()
{
    struct node *newnode = getnode();
    newnode->next = head;
    head = newnode;
    count++;
}

// INSERTION AT THE ENDING
void insert_at_end()
{
    struct node *newnode = getnode();
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    count++;
}

// INSERTION AT A POSITION
void insert_at_pos()
{
    int pos, i = 1;
    printf("Enter the position (1 to %d) to insert the node: ", count + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > count + 1)
    {
        printf("Invalid position.\n");
        return;
    }

    struct node *newnode = getnode();
    if (pos == 1)
    {
        insert_at_beg();
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        count++;
    }
}

// DELETION AT THE BEGINNING
void delete_at_beg()
{
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    count--;
}

// DELETION AT THE END
void delete_at_end()
{
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return;
    }
    struct node *prev;
    temp = head;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    count--;
}

// DELETION AT A POSITION
void delete_at_pos()
{
    int pos, i = 1;
    printf("Enter the position (1 to %d) to delete the node: ", count);
    scanf("%d", &pos);

    if (pos < 1 || pos > count)
    {
        printf("Invalid position.\n");
        return;
    }

    struct node *prev;
    if (pos == 1)
    {
        delete_at_beg();
    }
    else
    {
        prev = head;
        while (i < pos - 1)
        {
            prev = prev->next;
            i++;
        }
        temp = prev->next;
        prev->next = temp->next;
        free(temp);
        temp = NULL;
        count--;
    }
}

int main()
{
    int n, choice;
    printf("Initialize a linked list:\n");
    printf("No. of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        insert_at_end();
    }
    printf("Initialized linked list:\n");
    display();

    // Menu for functions
    do
    {
        printf("\nChoose the function you want to perform:\n");
        printf("1. Insertion at the beginning\n");
        printf("2. Insertion at the end\n");
        printf("3. Insertion at a specific position\n");
        printf("4. Deletion at the beginning\n");
        printf("5. Deletion at the end\n");
        printf("6. Deletion at a specific position\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_at_beg();
            display();
            break;
        case 2:
            insert_at_end();
            display();
            break;
        case 3:
            insert_at_pos();
            display();
            break;
        case 4:
            delete_at_beg();
            display();
            break;
        case 5:
            delete_at_end();
            display();
            break;
        case 6:
            delete_at_pos();
            display();
            break;
        case 7:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
