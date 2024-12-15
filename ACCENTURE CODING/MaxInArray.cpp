#include <iostream>
#include <vector>
using namespace std;

void MaxInArray(const vector<int>& arr) {
    int max_value = arr[0];
    int max_index = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }

    cout << max_value << endl;
    cout << max_index << endl;
}

int main() {
    vector<int> arr = {23, 45, 82, 27, 66, 12, 78, 13, 71, 86};

    MaxInArray(arr);

    return 0;
}
