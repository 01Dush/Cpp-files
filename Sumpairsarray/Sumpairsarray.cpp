#include <iostream>
using namespace std;
void Sum(int a[], int b[], int n, int m, int x)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] + b[j] == x)
                cout << a[i] << " " << b[j] << endl;
        }
    }
}
void Sum(int a[], int b[], int n, int m, int x);
int main()
{
    int i, j, n, m, x;
    cout << "Enter size of both arrays" << endl;
    cin >> n >> m;
    int a[n], b[m];
    cout << "Enter first array:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter second array:" << endl;
    for (j = 0; j < m; j++)
        cin >> b[j];
    cout << "Enter specified sum:" << endl;
    cin >> x;
    Sum(a, b, n, m, x);
    return 0;
}