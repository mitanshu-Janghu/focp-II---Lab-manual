#include <iostream>
using namespace std;

int N = 4;
int countSolutions = 0;

void solve(int colMask, int leftDiag, int rightDiag) {
    if (colMask == (1 << N) - 1) {
        countSolutions++;
        return;
    }

    int safe = ((1 << N) - 1) & ~(colMask | leftDiag | rightDiag);

    while (safe) {
        int bit = safe & -safe;
        safe -= bit;

        solve(colMask | bit,
              (leftDiag | bit) << 1,
              (rightDiag | bit) >> 1);
    }
}

int main() {
    solve(0, 0, 0);
    cout << countSolutions;
}