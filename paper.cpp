#include<iostream>
using namespace std;
class student{
public:
void print(){
    cout<<"hello world";
}
};
int fact(int x)
{
    int y=1;
    for(int i = 1 ; i <=x;i++){
        y*=i;
    }
    return y;
}
int main(){
    cout<<"hello world : ";
    cout<<fact(6);
    return 0;
}