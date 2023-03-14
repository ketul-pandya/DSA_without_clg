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

struct Node *deleteAtfirst(struct Node *head)
{
    struct Node *ptr = head;
    head = ptr->next;
    free(ptr);

    // head = head->next;
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    // struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *deleteAtGivenValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
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
    cout << "linkde list before deletion" << endl;
    linkedlist_traversal(head);
    cout << endl
         << endl;
    cout << "linkde list after deletion" << endl;

    head = deleteAtfirst(head);
    // head = deleteAtIndex(head, 1);
    // head = deleteAtEnd(head);
    // head = deleteAtGivenValue(head, 50);

    linkedlist_traversal(head);
}