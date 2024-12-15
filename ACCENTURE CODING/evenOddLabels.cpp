#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to label numbers as "even" or "odd"
string evenOddLabels(const vector<int>& A, int N) {
    string result = "";

    for (int i = 0; i < N; ++i) {
        if (A[i] % 2 == 0) {
            result += "even ";
        } else {
            result += "odd ";
        }
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6};
    int N = A.size();

    string result = evenOddLabels(A, N);
    cout << result << endl; // Output: "odd even odd even odd even"

    return 0;
}
