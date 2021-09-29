#include <iostream>

using namespace std;

int main()
{
    int n;
    int pos;
    int val;

    cout << "Enter any integer: ";
    cin >> n;
    cout << endl
         << "Enter bit position for update and value of bit for update: ";
    cin >> pos >> val;

    int mask = ~(1 << pos);
    n = n & mask;

    cout << endl
         << "Integer after update bit: " << (n | (val << pos));

    return 0;
}