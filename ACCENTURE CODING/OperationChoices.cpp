#include <iostream>
using namespace std;

int OperationChoices(int c, int a, int b) {
    switch (c) {
        case 1: 
            return a + b;
        case 2: 
            return a - b;
        case 3: 
            return a * b;
        case 4: 
            return a / b; // Assume b is not zero
        default:
            return 0; // Handle unexpected values for c
    }
}

int main() {
    int c, a, b;

    cout << "Enter value for c, a, b: ";
    cin >> c >> a >> b;

    int result = OperationChoices(c, a, b);
    cout << result << endl;

    return 0;
}
