#include <iostream>
using namespace std;
void sum (int a , int b){
cout<<a+b<<endl;
}
int substract (int a, int b){
    return a-b;
}
int main() {
    int a,b;
    char c;
    cin>>a>>c>>b;
    if (c == '+') sum(a,b);
   else if (c== '-') cout<<substract(a,b)<<endl;
    return 0;
}