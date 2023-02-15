#include <iostream>
using namespace std;
int deletion(int array[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    for (int j = 0; j < size - 1; j++)
    {
        cout << array[j] << " ";
    }
}
int main()
{
    int arr[4] = {1, 2, 33, 66};
    int size = 4;
    int index;
    cin >> index;
    deletion(arr, size, index);
}