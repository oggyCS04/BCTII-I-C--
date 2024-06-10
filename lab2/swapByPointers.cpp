#include <iostream>
using namespace std;

void swapByPointer(int*,int*);


int main(){
    int a,b;

    cout<<"Enter the first numbers: ";
    cin>>a;
    cout<<"Enter the second numbers: ";
    cin>>b;

    cout<<"The values before swap in a="<<a<<" and b="<<b<<endl;

    swapByPointer(&a,&b);

    cout<<"The values after swap in a="<<a<<" and b="<<b<<endl;

    return 0;
}

void swapByPointer(int *a, int *b){

    int *temp;

    *temp = *a;
    *a= *b;
    *b = *temp;

}
