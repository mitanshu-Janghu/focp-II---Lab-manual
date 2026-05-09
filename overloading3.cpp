#include<iostream>
using namespace std;
class data{
public:
int d ;

data(int d){
this->d=d;
}

void show(){
cout << d;
}
void operator++ (int);
};

void data::operator++ (int){
    d++;
}
int main(){
    data d1(10);
d1++;
d1.show();
}