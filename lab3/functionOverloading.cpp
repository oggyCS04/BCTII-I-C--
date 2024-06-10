#include<iostream>
using namespace std;

void calcArea(int l);
int  calcArea(float);
void calcArea(float,float);

int main(){
    cout<<"Choose option for area of different shapes \n1. Area of Cube\n2. Area of Circle\n3. Area of Rectangle\n";
    int choice;
    cin>>choice;

    if(choice==1){
        cout<<"Enter the lenght of the cube : ";
        int length;
        cin>>length;
        calcArea(length);
    }else if(choice==2){
        cout<<"Enter the radius of the Circle : ";
        float radius;
        cin>>radius;
        calcArea(radius);
    }else if(choice==3){
        cout<<"Enter the length and breadth of the Rectangle : ";
        float length,breadth;
        cin>>length;
        cin>>breadth;
        calcArea(length,breadth);
    }else{
        cout<<"You entered wrong number!!!";
    }
    return 0;
}

void calcArea(int l){
    cout<<"Area of Cube is "<<(6*l*l)<<endl;
}
int calcArea(float l){
    cout<<"Area of Circle is "<<(3.14*l*l)<<endl;
    return 0;
}

void calcArea(float l, float b){
    cout<<"Area of rectangle is "<<(l*b)<<endl;
}