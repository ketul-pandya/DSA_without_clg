#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedlist_traversal(struct Node **head)
{
    struct Node *ptr = *head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    while (ptr != *head)
    {
        cout << ptr->data << endl;
        ptr = ptr->prev;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // Allocated memory stored in linkedlist in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // linking first(head) and second node
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    // linking second and third node
    second->data = 10;
    second->next = third;
    second->prev = head;

    // terminate the list at third node
    third->data = 50;
    third->next = NULL;
    third->prev = second;

    linkedlist_traversal(&head);
}