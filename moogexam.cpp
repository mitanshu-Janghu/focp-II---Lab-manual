#include<iostream>
using namespace std;
float result(int a,int b){
return (a+b);
}
float result(int a,int b,int c){
return (a+b+c);
}
float result(int a,int b,int c,int d){
return (a+b+c+d);
}
float result(int a,int b,int c,int d,int e){
return (a+b+c+d+e);
}
int main(){
    cout<<result(12,27,23,23,23);
return 0;
}