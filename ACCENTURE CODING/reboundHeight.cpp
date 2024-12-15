#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int H = 100; // Initial height
    int V = 20; // Initial velocity
    int Vn = 5; // Final velocity after N bounces
    int N = log((double)Vn / V) / log(0.9); // Calculate N using formula
    double height = H * pow(0.9, N); // Calculate height after N bounces
    cout << (int)height << endl;
    return 0;
}
