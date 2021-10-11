#include <iostream>

using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i + 1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastocc(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n, i, key;

    cout << "Enter size of an Array: ";
    cin >> n;

    int arr[n];
    cout << endl
         << "Enter elements in array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Enter key: ";
    cin >> key;

    cout << endl
         << "First occurance " << firstocc(arr, n, 0, key);
    cout << endl
         << "Last occurance: " << lastocc(arr, n, 0, key);

    return 0;
}