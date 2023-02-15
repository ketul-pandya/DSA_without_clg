#include <iostream>
using namespace std;
int insertion(int array[], int size, int element, int index)
{
    for (int i = size - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
    for (int j = 0; j < size + 1; j++)
    {
        cout << array[j] << " ";
    }
}
int main()
{
    int arr[4] = {1, 2, 33, 66};
    int size = 4;
    int element;
    cin >> element;
    int index;
    cin >> index;
    insertion(arr, size, element, index);
}