#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int ans = 0;

    ifstream fin("shares.csv");
    if(!fin){
        cout << "Error opening file" << endl;
        return 1;
    }

    string line;
    while(getline(fin, line)){
        cout << line << endl;
        ans+=line.length();
    }

    fin.close();
    cout << ans;

    return 0;
}