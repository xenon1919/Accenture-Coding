#include<bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int target_sum, const vector<int>& arr) {
    if (arr.size() < 2) {
        return -1;
    }

    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    for (size_t i = 0; i < sorted_arr.size() - 1; ++i) {
        for (size_t j = i + 1; j < sorted_arr.size(); ++j) {
            if (sorted_arr[i] + sorted_arr[j] <= target_sum) {
                return sorted_arr[i] * sorted_arr[j];
            }
        }
    }

    return 0;
}

int main() {
    int sum_value = 9;
    vector<int> arr = {5, 2, 4, 3, 9, 7, 1};
    int output = ProductSmallestPair(sum_value, arr);
    cout << output << endl;

    sum_value = 4;
    arr = {9, 8, 3, -7, 3, 9};
    output = ProductSmallestPair(sum_value, arr);
    cout << output << endl;

    return 0;
}
