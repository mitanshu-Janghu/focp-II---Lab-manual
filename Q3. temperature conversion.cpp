#include <iostream>
using namespace std;
int main(){
    float tem;
    char choice;
    cin>>tem;
    cout<<"enter 'c'or 'C'to convert c to f and enter 'f' or 'F' to convert f to c";
    cin>>choice;
    if (choice=='c'||choice=='C')
    cout<<(9.0/5*tem+32);
    else if(choice=='f'||choice=='F')
    cout<<5.0/9*(tem-32);
    else cout<<"invalid choice";
    return 0;
