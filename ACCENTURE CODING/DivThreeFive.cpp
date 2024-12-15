#include <iostream>
using namespace std;

int Calculate(int m, int n) {
    int sum = 0;
    
    for (int i = m; i <= n; i++) {
        if (i % 15 == 0) {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    int m, n;

    cout << "Enter the values of m and n: ";
    cin >> m >> n;

    int result = Calculate(m, n);
    cout << result << endl;

    return 0;
}
