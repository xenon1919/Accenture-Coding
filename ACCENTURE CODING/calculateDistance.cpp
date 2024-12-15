#include <iostream>
#include <cmath>
using namespace std;

double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1 = 1, y1 = 1;
    int x2 = 2, y2 = 4;
    int x3 = 3, y3 = 6;

    double distance1 = calculateDistance(x1, y1, x2, y2);
    double distance2 = calculateDistance(x2, y2, x3, y3);
    double distance3 = calculateDistance(x1, y1, x3, y3);

    double totalDistance = distance1 + distance2 + distance3;

    cout << totalDistance << endl;

    return 0;
}
