#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void linkedlist_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
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

    // linking second and third node
    second->data = 10;
    second->next = third;

    // terminate the list at third node
    third->data = 50;
    third->next = NULL;
    linkedlist_traversal(head);
}