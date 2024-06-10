#include <iostream>
using namespace std;

void convCF();
void convFC();

int main(){

    int check;

    cout<<"To convert Centigrade to Farenheit Enter 1 and for farenheit to centigrade Enter 2 :: ";
    cin>>check;

    if(check==1){
        convCF();
    }
    else if(check==2){
        convFC();
    }
    else{
        cout<<"You entered wrong number";
    }
    return 0;
}

    void convCF(){
        float c,f;

        cout<<"Enter temperature in Centigrade : ";
        cin>>c;

        f=(1.8*c)+32;

        cout<<"Temperatue in Farenheit "<<f;
    }

    void convFC(){
        float k,l;
        cout<<"Enter temperature in farenheit : ";
        cin>>l;

        k=(l-32)*0.556;

        cout<<"Temperatue in centigrade "<<k;
    }