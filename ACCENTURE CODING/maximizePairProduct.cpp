#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximizePairProduct(int N, vector<int> A) {
    int maxProduct = -1;
    vector<int> result = {-1, -1};

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (A[i] + A[j] == 18 && A[i] > A[j]) {
                int product = A[i] * A[j];
                if (product > maxProduct) {
                    maxProduct = product;
                    result = {A[i], A[j]};
                }
            }
        }
    }

    return result;
}

int main() {
    vector<int> A = {10, 8, 9, 5, 13, 4, 7};
    int N = A.size();

    vector<int> result = maximizePairProduct(N, A);
    if (result[0] != -1) {
        cout << "Pair with maximum product: (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "No pair found with sum equal to 18 and first element greater than second element." << endl;
    }

    return 0;
}
