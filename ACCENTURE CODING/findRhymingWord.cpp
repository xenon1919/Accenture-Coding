#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findRhymingWord(const string& S, const vector<string>& D, int n) {
    int maxMatch = 0;
    string bestWord = "No Word";

    for (int i = 0; i < n; ++i) {
        const string& word = D[i];
        if (word == S) continue; // If it's the same word, skip it

        int m = word.size();
        int matchLength = 0;

        for (int j = 1; j <= min(S.size(), word.size()); ++j) {
            if (S[S.size() - j] != word[word.size() - j]) break;
            matchLength++;
        }

        if (matchLength > maxMatch) {
            maxMatch = matchLength;
            bestWord = word;
        }
    }

    return bestWord;
}

int main() {
    string S = "critical";
    vector<string> D = {"typical", "physical", "cynical", "biblical"};
    int n = D.size();

    string result = findRhymingWord(S, D, n);
    cout << result << endl; // Output: "typical"

    return 0;
}
