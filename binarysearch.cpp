#include <iostream>
using namespace std;
int binary_search(int array[], int strt, int end, int number)
{
    while (strt <= end)
    {

        int mid = (strt + end) / 2;
        if (array[mid] == number)
        {
            return number;
        }
        else if (number > array[mid])
        {

            strt = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int n, num;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> num;
    int result = binary_search(arr, 0, n, num);
    if (result == 1)
    {
        cout << "we found it!!!" << endl;
    }
    else
    {
        cout << "sorry" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int ceiling(int array[], int strt, int end, int number)
{
    if (number > array[(sizeof(array) / sizeof(int)) - 1])
    {
        return -1;
    }
    while (strt <= end)
    {

        int mid = (strt + end) / 2;
        if (array[mid] == number)
        {
            return number;
        }
        else if (number > array[mid])
        {

            strt = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return array[strt];
}
int main()
{
    int n, num;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> num;
    int result = ceiling(arr, 0, n, num);
    cout << result;
}

#include <iostream>
using namespace std;
int floor(int array[], int strt, int end, int number)
{
    if (number < array[0])
    {
        return -1;
    }
    while (strt <= end)
    {

        int mid = (strt + end) / 2;
        if (array[mid] == number)
        {
            return number;
        }
        else if (number > array[mid])
        {

            strt = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return array[end];
}
int main()
{
    int n, num;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> num;
    int result = floor(arr, 0, n, num);
    cout << result;
}

#include <iostream>
using namespace std;
char ceil_leetcode(char array[], int strt, int end, char number)
{
    while (strt <= end)
    {

        int mid = (strt + end) / 2;
        if (array[mid] == number)
        {
            return number;
        }
        else if (number > array[mid])
        {

            strt = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return array[strt];
}
int main()
{
    int n;
    char num;
    cin >> n;
    char *arr = new char[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> num;
    char result = ceil_leetcode(arr, 0, n, num);
    cout << result;
}
