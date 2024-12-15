#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

// Function to find the count of occurrences of the second largest element
int countSecondLargest(int N, vector<int>& A) {
    if (N < 2) return 0; // If the array has less than 2 elements, return 0

    // Sort the array
    sort(A.begin(), A.end());

    // Find the largest element
    int largest = A[N - 1];

    // Find the second largest element
    int secondLargest = -1;
    for (int i = N - 2; i >= 0; --i) {
        if (A[i] < largest) {
            secondLargest = A[i];
            break;
        }
    }

    // If all elements are the same, return 0
    if (secondLargest == -1) return 0;

    // Count occurrences of the second largest element
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] == secondLargest) {
            count++;
        }
    }

    return count;
}

int main() {
    int N = 8;
    vector<int> A = {1, 2, 3, 4, 4, 5, 5, 5};

    int result = countSecondLargest(N, A);
    cout << "Count of occurrences of the second largest element: " << result << endl; // Output: 2

    return 0;
}
