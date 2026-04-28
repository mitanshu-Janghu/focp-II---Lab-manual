#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int width;

    Rectangle(){
        length=0;
        width=0;
    }

    Rectangle(int l,int w){
        length=l;
        width=w;
    }

    void display(){
        cout<<"length= "<<length<<endl;
        cout<<"width= "<<width<<endl; 
    }

    friend void Area(Rectangle obj);
};

void Area(Rectangle obj){
    cout<<"Area is "<<obj.length * obj.width << endl;
}

int main(){
    Rectangle r1, r2(23,45);

    r1.display();
    Area(r1);

    r2.display();
    Area(r2);

    return 0;
}