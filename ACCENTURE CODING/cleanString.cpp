#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string cleanString(const string& A, const string& B) {
    unordered_set<char> charactersB(B.begin(), B.end());
    string result;

    for (char ch : A) {
        if (charactersB.find(ch) == charactersB.end()) {
            result += ch;
        }
    }

    return result.empty() ? "Empty" : result;
}

int main() {
    string A = "HELLO";
    string B = "LO";
    
    string leftover = cleanString(A, B);
    cout << leftover << endl; // Output: "HE"

    return 0;
}
