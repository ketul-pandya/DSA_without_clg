#include <iostream>
using namespace std;
int top = 0;
void push(int n, int array[])
{
    if (top == n)
    {
        cout << "you have crossed your limits" << endl;
    }
    else
    {
        cin >> array[top];
        top++;
    }
}
void pop(int n, int array[])
{
    if (top == 0)
    {
        cout << "underflow" << endl;
    }
    else
    {
        top--;
    }
}
void display(int array[])
{
    if (top == 0)
    {
        cout << "sorry bro nothing to display" << endl;
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            cout << array[i] << endl;
        }
    }
}

void peek(int array[])
{
    cout << array[top - 1];
}
int main()
{
    int size, choice;
    cout << "entre the size of array";
    cin >> size;
    int *arr = new int[size];

    do
    {
        cout << "enter 1 for push , enter 2 for pop , enter 3 for display and 0 for exit ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push(size, arr);
            break;
        case 2:
            pop(size, arr);
            break;
        case 3:
            display(arr);
            break;
        case 4:
            int location;
            // cin >> location;
            peek(arr);
            break;
        default:
            break;
        }
    } while (choice != 0);
    return 0;
}