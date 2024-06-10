#include <iostream>
using namespace std;

void swap(int,int);

int main(){
    int a,b;

    cout<<"Enter the first numbers: ";
    cin>>a;
    cout<<"Enter the second numbers: ";
    cin>>b;

    cout<<"The values before swap in a="<<a<<" and b="<<b<<endl;

    swap(a,b);

    return 0;
}

void swap(int a, int b){
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout<<"The values after swap in a="<<a<<" and b="<<b;

}