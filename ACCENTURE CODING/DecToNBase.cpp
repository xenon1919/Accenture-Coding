#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string DectoNBase(int n, int num) {
    // Validate the base
    if (n < 2 || n > 36) {
        return ""; // Return an empty string for invalid base
    }

    if (num == 0) return "0"; // Handle the case for 0 input

    string result; // To store the result in reverse order
    int quotient = num;

    // Perform the conversion
    while (quotient > 0) {
        int remainder = quotient % n; // Calculate the remainder
        quotient /= n; // Update the quotient

        // Convert remainder to appropriate character
        if (remainder < 10) {
            result += (remainder + '0'); // Convert to '0' to '9'
        } else {
            result += (remainder - 10 + 'A'); // Convert to 'A' to 'Z'
        }
    }

    // Reverse the result string since we've built it in reverse order
    reverse(result.begin(), result.end());

    return result; // Return the resulting string
}

int main() {
    int n1 = 12, num1 = 718;
    string result1 = DectoNBase(n1, num1);
    cout << result1 << endl; // Output: 4BA

    int n2 = 21, num2 = 5678;
    string result2 = DectoNBase(n2, num2);
    cout << result2 << endl; // Output: CI8

    return 0;
}
