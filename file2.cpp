#include<iostream>
#include<fstream>
using namespace std;    
int main(){
    ofstream fout("nums.txt");
    fout << 11 << " " << 23 << " " << 46;
    fout.close();
    ifstream fin("nums.txt");
    int a, b, c;
    fin >> a >> b >> c;
    fin.close();
    cout << a << " " << b << " " << c << endl; 
    return 0;   
}