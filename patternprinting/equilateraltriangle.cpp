#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a-i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int l = 2; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}