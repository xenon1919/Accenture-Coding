#include <iostream>
#include <string>
using namespace std;

// Function to find the length of the longest uninterrupted substring
int longestUninterruptedSubstring(const string& S) {
    int maxLength = 0;
    int currentLength = 0;

    for (char ch : S) {
        if (ch != '.') {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
    }

    return maxLength;
}

int main() {
    string S = "abc.bac";
    int result = longestUninterruptedSubstring(S);
    cout << "The length of the longest uninterrupted substring is: " << result << endl; // Output: 3

    return 0;
}
