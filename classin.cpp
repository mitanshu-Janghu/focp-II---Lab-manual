#include<iostream>
using namespace std;
class A{
int a=0;
public:
A(){
    a=100;
}
A(int aa){
    a=aa;
}


};
class B:public A{
int b=0;
public:
B(){
    b=100;
}
B(int aa){
    b=aa;
}
~B();
};
class C:public A{
int c=0;
public:
C(){
    c=100;
}
C(int aa){
    c=aa;
}
~C();
};
class D:virtual public B,virtual public C{
public:
int d=0;
D(int aa){
    d=aa;
}
~D();
};
int main(){
D d1(1);
cout<<d1.d;
}

