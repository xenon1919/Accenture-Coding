#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter lower limit and upper limit: ";
    cin >> lowerLimit >> upperLimit;

    cout << "Palindrome numbers between " << lowerLimit << " and " << upperLimit << ":\n";
    
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
