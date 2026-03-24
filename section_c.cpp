#include<iostream>
using namespace std;
class A {
int a1;
public:
A(int a1){
this->a1=a1;
}

//this->
};
class B:public A{
int a2;
public:
B(int a1,int a2):A(a1){
this->a2=a2;
}
};
int main(){
A *a = new A(5);
B *b = new B(5,4);

cout<<a;



return 0;
}