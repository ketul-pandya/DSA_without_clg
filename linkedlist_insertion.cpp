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

// case 1:
struct Node *insertAtfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// case 2:
struct Node *insertAtindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// case 3:
struct Node *insertAtend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (!(p->next) == NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// case 4:
struct Node *insertAtafterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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

    linkedlist_traversal(head);
    cout << endl
         << endl;
    // head = insertAtfirst(head, 56);
    head = insertAtindex(head, 58, 1);
    // head = insertAtend(head, 69);
    // head = insertAtafterNode(head, second, 101);
    linkedlist_traversal(head);
}