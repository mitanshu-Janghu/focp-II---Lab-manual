#include <iostream>
using namespace std;
class Student{
int marks1;
int marks2;
int marks3;
int rollNo;
string name;
public:
Student(){
marks1=0;
marks2=0;
marks3=0;
rollNo=1;
name="";
};
Student(string n){
    name=n;
};
Student(string n,int roll){
    name=n;
rollNo=roll;
};
Student(string n,int roll,int m1,int m2,int m3){
     name=n;
rollNo=roll;
marks1=m1;
marks2=m2;
marks3=m3;
};
public:
void inputDetails()
{
    cout<<"enter your name : ";
    cin>>name;
    cout<<"enter your rollno : ";
    cin>>rollNo;
    cout<<"enter your marks1 : ";
    cin>>marks1;
    cout<<"enter your marks2 : ";
    cin>>marks2;
    cout<<"enter your marks3 : ";
    cin>>marks3;
}
int calculateTotal()
{
    return marks1+marks2+marks3;
}
void displayDetails()
{
    cout<<"\n Name : "<<name<<"\n Roll No : "<<rollNo;
    cout<<"\n Mark1 : "<<marks1<<"\n Marks2 : "<<marks2<<"\n Marks3 : "<<marks3;
    cout<<"\n Total : "<<calculateTotal()<<"\n";
}};
int main(){
Student s1;
s1.displayDetails();
return 0;
}