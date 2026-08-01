#include <iostream>
using namespace std;
void function2(){
    cout<<"you are in function2";
    return;
}
void function1 (){ //function 1 
    cout<<"you are in function1"<<endl;
    function2(); //call for function2
}
int main() {
     cout<<"you are in main "<<endl;
     function1(); //function call
    return 0;
}