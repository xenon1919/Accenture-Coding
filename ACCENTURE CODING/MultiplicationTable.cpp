#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication table of " << number << ":\n";
    
    for (int i = 1; i <= 10; i++) {
        int multiple = number * i;
        cout << multiple;
        if (i < 10) {
            cout << ", ";
        }
        sum += multiple;
    }
    
    cout << endl << sum << endl;

    return 0;
}
