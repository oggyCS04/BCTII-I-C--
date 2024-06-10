#include<iostream>
using namespace std;

class student {
    public:
    char name[30];
    int roll;
    int age;
    student();
    int printData();

};

class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

student::student(){
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Enter your roll no : "<<endl;
    cin>>roll;
    cout<<"Enter your age : "<<endl;
    cin>>age;
}

int student::printData(){
    cout<<"Your name is "<<name;
    cout<<"\nYour rollno is "<<roll;
    cout<<"\nYour age is "<<age;
}

int main(){
    // student x;
    // x.printData();

    Employee myObj;
    myObj.setSalary(5000);
    cout<<myObj.getSalary();

    
    
    return 0;
}