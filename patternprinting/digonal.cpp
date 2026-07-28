#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
int c= a+1;
    for (int i = 1; i <= a; i++)
    {
        for (int j =1; j <= a; j++){
            
        if( j==i || j==c-1) cout <<"* ";
      
         else cout << "  ";
         
        }
        cout<< endl;
        c--;
    }

    return 0;
}