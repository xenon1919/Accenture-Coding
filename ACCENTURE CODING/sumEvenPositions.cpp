#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the array and find sum of elements at even positions
int sumEvenPositions(vector<int>& A, int N) {
    // Reverse the array
    for (int i = 0; i < N / 2; ++i) {
        swap(A[i], A[N - i - 1]);
    }

    // Calculate the sum of elements at even positions
    int sum = 0;
    for (int i = 0; i < N; i += 2) {
        sum += A[i];
    }

    return sum;
}

int main() {
    vector<int> A = {10, 20, 30, 40, 50, 60};
    int N = A.size();

    int result = sumEvenPositions(A, N);
    cout << "Sum of elements at even positions: " << result << endl; // Output: 150

    return 0;
}
