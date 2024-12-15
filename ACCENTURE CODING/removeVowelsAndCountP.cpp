#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to remove vowels from a string
string removeVowels(const string& str) {
    string result;
    for (char ch : str) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }
    return result;
}

// Function to calculate the factorial of a number (n!)
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate the permutations of a string without vowels
int calculatePermutations(const string& str) {
    int length = str.size();
    return factorial(length);
}

int main() {
    vector<string> strings = {"abc", "def", "ghi"};
    int totalPermutations = 0;

    for (string& str : strings) {
        string noVowelStr = removeVowels(str);
        if (!noVowelStr.empty()) {
            totalPermutations += calculatePermutations(noVowelStr);
        }
    }

    cout << "Total Permutations: " << totalPermutations << endl;
    return 0;
}
