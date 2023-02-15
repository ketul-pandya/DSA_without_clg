#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void linkedlist_traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p is pointing to the lats node of the circular list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocated memory stored in linkedlist in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // linking first(head) and second node
    head->data = 70;
    head->next = second;

    // linking second and third node
    second->data = 101;
    second->next = third;

    // tlinking second and third node
    third->data = 20;
    third->next = fourth;

    // terminate the list at fourth node
    fourth->data = 560;
    fourth->next = NULL;
    cout << "before insertion" << endl;
    linkedlist_traversal(head);
    cout << "after inseriton" << endl;

    head = insertAtFirst(head, 44);
    linkedlist_traversal(head);
}