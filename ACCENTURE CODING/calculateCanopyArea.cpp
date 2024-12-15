#include <iostream>
#include <cmath> // for M_PI and round function
using namespace std;

int calculateCanopyArea(int D) {
    double area = M_PI * D * D;
    return round(area); // Round off to the nearest integer
}

int main() {
    int D = 5;
    int area = calculateCanopyArea(D);
    cout << "The area of the canopy shadow is: " << area << endl; // Output: 78
    return 0;
}
