#include <iostream>
using namespace std;

// Function to calculate the waiting time for the last print job
int waitingTime(int N, int X) {
    // Time taken for each print job
    int jobTime = 10;

    // If the interval between job arrivals is less than or equal to the job time
    if (X <= jobTime) {
        // The last job will wait for (N-1) * jobTime minutes
        return (N - 1) * jobTime;
    } else {
        // If the interval between job arrivals is greater than the job time
        // The waiting time for the last job will be (N-1) * X
        return (N - 1) * X;
    }
}

int main() {
    int N = 5; // Example: 5 print jobs
    int X = 8; // Example: Next job arrives every 8 minutes

    int result = waitingTime(N, X);
    cout << "The waiting time for the last print job is: " << result << " minutes" << endl; // Output

    return 0;
}
