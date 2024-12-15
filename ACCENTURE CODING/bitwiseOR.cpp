#include <iostream>
using namespace std;

int bitwiseOR(int a, int b) {
    return a | b;
}

int main() {
    int a = 12; // Example value
    int b = 25; // Example value

    int result = bitwiseOR(a, b);
    cout << "The result of " << a << " | " << b << " is: " << result << endl;

    return 0;
}
