#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the Nth number in the special Fibonacci series
int specialFibonacci(int N) {
    // Base cases
    if (N == 0) return 1;
    if (N == 1) return 1;
    
    // Vector to store Fibonacci values
    vector<int> f(N + 1);
    f[0] = 1;
    f[1] = 1;
    
    // Calculate the Fibonacci values up to N
    for (int i = 2; i <= N; ++i) {
        f[i] = (2 * f[i - 1] + f[i - 2] * f[i - 2]) % 47;
    }
    
    // Return the Nth Fibonacci value modulo 47
    return f[N];
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int result = specialFibonacci(N);
    cout << "The " << N << "th number in the special Fibonacci series is: " << result << endl;

    return 0;
}
