#include <iostream>
using namespace std;

int MaxExponents(int a, int b) {
    int maxNumber = a; // Start with a as the default max number
    int maxExponent = -1; // Initialize maximum exponent to a low value
    
    for (int i = a; i <= b; i++) {
        int count = 0;
        int num = i;

        while (num % 2 == 0 && num > 0) {
            count++;
            num /= 2; // Divide by 2 to count the exponent
        }

        if (count > maxExponent || (count == maxExponent && i < maxNumber)) {
            maxExponent = count;
            maxNumber = i; // Update max number if we find a larger exponent or smaller number
        }
    }
    
    return maxNumber;
}

int main() {
    int a, b;

    cout << "Enter values for a and b: ";
    cin >> a >> b;

    int result = MaxExponents(a, b);
    cout << result << endl;

    return 0;
}
