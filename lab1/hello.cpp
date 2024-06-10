#include <iostream>
using namespace std;

int main(){

    int deg;
    float radian;

    cout<<"Enter angle in radian";
    cin>>deg;

    radian = (3.14/180)*deg;
    
    cout<<"angle in radian is "<<radian;
    return 0;
}