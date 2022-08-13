#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char a;
    cout << "Enter the numbers: " << endl;
    cin >> i >> j;
    cout << "Enter a value corresponding to the operation\n a)Addition\n b)Subtraction\n c)Multiplication\n d)Division" << endl;
    cin >> a;
    switch (a)
    {
    case 'a':
        cout << i << " + " << j << " = " << i + j << endl;
        break;
    case 'b':
        cout << i << " - " << j << " = " << i - j << endl;
        break;
    case 'c':
        cout << i << " x " << j << " = " << double(i * j) << endl;
        break;
    case 'd':
        cout << i << " / " << j << " = " << float(i / j) << endl;
        break;

    default:
        cout << "Wrong input" << endl;
        break;
    }
    return 0;
}