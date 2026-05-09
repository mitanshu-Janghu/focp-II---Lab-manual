#include<iostream>
using namespace std;
class data{

int d ;
public:
data(int d){
this->d=d;
}
void operator ++ () {
        d++;
}
void operator++ (int){
    d++;
}
data operator - (data b){
data temp(0);
temp.d=d-b.d;
return temp;
}
void show(){
cout << d;
}
};
int main(){
    data d1(10);
    data d2(20);
    data d3 = d1 - d2;
    ++d3;
    d3++;
d3.show();
}