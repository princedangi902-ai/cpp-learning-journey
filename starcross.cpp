#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int n2 = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j == i || j == n2)
                cout << " *";

            else
                cout << "  ";
        }

        --n2;
        cout << endl;
    }
    return 0;
}