#include <iostream>
using namespace std;

//Create and calling function using pointer concept
void display(int *a){
    cout <<"Value of a is: "<<*a<<endl; // * is derefrencing operator
}
int main(){
    int num=10;
    display(&num);
    return 0;
}