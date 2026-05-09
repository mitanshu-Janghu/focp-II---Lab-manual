#include<iostream>
using namespace std;
class A {
    public:
        int a1;

};

int main(){
A a ;
a.a1=5;



cout<<a.a1<<endl;
 A a2(a);
 a2.a1=8;

cout<<a2.a1<<endl;

return 0;
}