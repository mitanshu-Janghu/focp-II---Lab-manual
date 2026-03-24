#include<iostream>
using namespace std;
class a{
    public:
    void display(){
cout<<"hi";
    }
};
class b:public a{

};
int main(){
    a s1;
    s1.display();
    return 0;
}