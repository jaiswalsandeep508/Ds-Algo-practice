#include <iostream>
using namespace std;

int pas(int n)
{
    int fact = 1, i;
    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, i, j, r;

    cout << "Enter the value of 'n' and 'r' number: ";
    cin >> n >> r;
    cout << endl;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << pas(i) / pas(j) * pas(i - r);
        }
        cout << endl;
    }

    return 0;
}