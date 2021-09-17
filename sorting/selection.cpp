#include <iostream>

using namespace std;

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "enter the size of an array: ";
    cin >> n;
    cout << endl
         << "Enter the values in array: ";

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}