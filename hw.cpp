#include <iostream>
using namespace std;

void computePerformance(int a[], int n, double &avg, int &min, int &max);

int main() {
    int n = 10;
    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter marks of student " <<i+1<<": ";
        cin >> a[i];
    }
    double avg;
    int min, max;
    computePerformance(a, n, avg, min, max);
    cout << "\nAverage = " << avg << endl;
    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;
    return 0;
}

void computePerformance(int a[], int n, double &avg, int &min, int &max) {
    int sum = 0;
    min = a[0];
    max = a[0];
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    avg = sum *1.0/ n;
}