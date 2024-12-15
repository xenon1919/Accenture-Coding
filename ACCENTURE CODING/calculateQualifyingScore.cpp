#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate qualifying score and status
string calculateQualifyingScore(int N, vector<int>& S1, vector<int>& S2, int P) {
    vector<int> differences(N);
    
    // Step 1: Calculate differences
    for (int i = 0; i < N; ++i) {
        differences[i] = S2[i] - S1[i];
    }

    // Step 2: Sort differences in descending order
    sort(differences.begin(), differences.end(), greater<int>());
    
    // Calculate the qualifying score using the top P differences
    int qualifyingScore = 0;
    for (int i = 0; i < P && i < N; ++i) {
        qualifyingScore += differences[i];
    }

    // Determine the result based on the qualifying score
    if (qualifyingScore >= 35) {
        return "Qualified " + to_string(qualifyingScore);
    } else {
        return "Disqualified " + to_string(qualifyingScore);
    }
}

int main() {
    int N = 5; // Number of subjects
    vector<int> S1 = {30, 25, 40, 20, 35}; // Marks in semester 1
    vector<int> S2 = {35, 30, 50, 30, 45}; // Marks in semester 2
    int P = 3; // Number of subjects to consider for qualifying score

    string result = calculateQualifyingScore(N, S1, S2, P);
    cout << result << endl; // Output: Qualified 50 (example output)

    return 0;
}
