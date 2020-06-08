#include <iostream>
using namespace std;

double myPow(double x, int n) {
    int total = 1;
    for (int i = 0; i < n; ++i) {
        total *= x;
    }
    return total;
}

double myPowRecurs(double x, int n) {
    if (n == 0) { return 1; } 
    else if (n > 1) { return x * myPowRecurs(x, n-1); }
    else { return x; }
}

int main () { 
    cout << myPow(3, 3) << endl;
    cout << myPowRecurs(3, 3) << endl; }
    
