#include<iostream>
using namespace std;

class data {
public:
    int a;

    data(int b) {
        a = b;
    }

    data operator + (data d) {
        data temp(0);

        temp.a = a + d.a;
cout<<a<<endl;
        return temp;
    }
};

int main() {
    data d1(20);
    data d2(30);

    data d3 = d2 + d1;

    cout << d3.a;
}