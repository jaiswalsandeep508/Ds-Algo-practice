#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of char: ";
    cin >> n;
    char array[n + 1];

    cout << endl
         << "Enter any char for check pallindrome char: ";
    cin >> array;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
        cout << endl
             << "Char is pallindrome";

    else
        cout << endl
             << "Not pallindrome";

    return 0;
}