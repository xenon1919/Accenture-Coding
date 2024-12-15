#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int N;
    char C;
    cin >> S >> N >> C;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == C) count++;
    }
    cout << count << endl;
    return 0;
}
