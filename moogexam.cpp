#include<iostream>
using namespace std;
float result(int a,int b,int c=0,int d=0,int e=0){
return (a+b+c+d+e);
}
int main(){
    cout<<result(12,27);
return 0;
}