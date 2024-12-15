#include <iostream>
#include <vector>
using namespace std;

int ratCountHouse(int r, int unit, int n, vector<int> arr) {
    if (arr.empty()) {
        return -1;
    }
    int totalFoodRequired = r * unit;
    int cumulativeFood = 0;
  
    for (int i = 0; i < n; ++i) {
        cumulativeFood += arr[i];
        if (cumulativeFood >= totalFoodRequired) {
            return i + 1;
        }
    }
    return 0;
}

int main() {
    int r, unit, n;
    cin >> r >> unit >> n;
  
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    int result = ratCountHouse(r, unit, n, arr);
    cout << result << endl;
    return 0;
}
