#include <iostream>
#include <vector>
#include <string>
using namespace std;

string MoveHyphen(const string& str) {
    if (str.empty()) {
        return ""; // Return empty if the input string is empty
    }

    int hyphenCount = 0;

    // First pass to count hyphens
    for (char ch : str) {
        if (ch == '-') {
            hyphenCount++; // Count hyphens
        }
    }

    // Create a result vector with the correct size
    vector<char> result(str.size());
    int index = 0;

    // Fill the result vector with hyphens first
    while (hyphenCount > 0) {
        result[index++] = '-';
        hyphenCount--;
    }

    // Fill the rest of the result vector with non-hyphen characters
    for (char ch : str) {
        if (ch != '-') {
            result[index++] = ch; // Add non-hyphen characters
        }
    }

    // Convert result vector back to string and return
    return string(result.begin(), result.end());
}

int main() {
    string str1 = "Move-Hyphens-to-Front";
    string result1 = MoveHyphen(str1);
    cout << result1 << endl; // Output: ---MoveHyphenstoFront

    string str2 = "String-Compare";
    string result2 = MoveHyphen(str2);
    cout << result2 << endl; // Output: -StringCompare

    return 0;
}
