#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A = {10, 15, 25, 30}; // Example array of dividends
    int D = 5; // Divisor
    int Q = 4; // Quotient
    int R = 0; // Remainder
    int N = A.size(); // Length of array A

    int dividend = D * Q + R;
    int index = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] == dividend) {
            index = i;
            break;
        }
    }

    cout << index << endl;
    return 0;
}
