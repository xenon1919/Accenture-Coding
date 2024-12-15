#include <iostream>
#include <vector>
using namespace std;

int maxCandies(int input1, vector<int> input2, int input3) {
    int count = 0;
    int money = input3;

    for (int i = 0; i < input1; ++i) {
        if (input2[i] % 5 == 0) {
            count++;  // If price is a multiple of 5, Bob can get it for free
        } else if (money >= input2[i]) {
            money -= input2[i];  // Otherwise, he spends money on the candy
            count++;
        }
    }

    return count;
}

int main() {
    int input1 = 3;
    vector<int> input2 = {2, 5, 10};
    int input3 = 6;

    int result = maxCandies(input1, input2, input3);
    cout << result << endl;  // Output: 2

    return 0;
}
