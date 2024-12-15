#include <iostream>
using namespace std;

int productIn12HourSystem(int X, int Y) {
    int product = X * Y;
    int result = product % 12;
    
    // If the result is 0, we should return 12 instead
    if (result == 0) {
        result = 12;
    }

    return result;
}

int main() {
    int X = 4;
    int Y = 5;

    int result = productIn12HourSystem(X, Y);
    cout << "The product in the 12-hour system is: " << result << endl; // Output: 8

    return 0;
}
