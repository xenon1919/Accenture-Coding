#include <iostream>
using namespace std;

int main() {
    int N = 6; // Number of coconut sweets per box
    int E = 2; // Number of coconut sweets needed daily
    int D = 10; // Number of days on the island

    int total_sweets_needed = E * D;
    int buying_days = D - D / 7; // Excluding Sundays

    if (total_sweets_needed > buying_days * N) {
        cout << -1 << endl;
    } else {
        int min_boxes = (total_sweets_needed + N - 1) / N;
        cout << min_boxes << endl;
    }

    return 0;
}
