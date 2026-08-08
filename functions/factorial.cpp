#include <iostream>
using namespace std;
void fact(int a){
   int factorial=1;
    for(int i=1;i<=a;i++)
    {
        factorial= factorial*i;

    }
    cout<<factorial;
}
int main() {
    int a;
    cin>>a;
   fact(a);
    return 0;
}