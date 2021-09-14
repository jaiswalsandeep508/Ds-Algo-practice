#include <iostream>

using namespace std;

int binarysearch(int arr[], int key, int n)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s+e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, i;
    int key;

    cout << "Enter the value of 'n': ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of searching element: ";
    cin >> key;
    cout << binarysearch(arr, key, n) << endl;

    return 0;
}