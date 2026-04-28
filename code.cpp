#include<iostream>
using namespace std;

class shape{
public :
shape(){
    cout<<"default \n";
}
virtual void area(){
    cout<<"no dim no area \n";
}
void display(){
    cout<<"we are in 2d shape \n ";
}

};
class rectangle : public shape
{

public:
int length;  int width ;
rectangle(int l = 5 , int w = 1):length(l),width(w) {length=l;
width = w;}
    void area(){
        cout<<length*width << endl;
    }
};


int main(){
shape *s1,s2;
rectangle r2(50,40);
s1=&s2;
s1->area();
s1=&r2;
s2=r2;
s1->area();
s2.area();
return 0;
}

