#include <iostream>
#include <vector>
using namespace std;

void *ReplaceCharacter(vector<char>& str, char ch1, char ch2) {
    if (str.empty()) {
        return nullptr;
    }
    if (ch1 == ch2) {
        return &str; // No change needed if characters are the same
    }

    for (char& c : str) {
        if (c == ch1) {
            c = ch2; // Replace ch1 with ch2
        } else if (c == ch2) {
            c = ch1; // Replace ch2 with ch1
        }
    }
    return &str;
}

int main() {
    vector<char> str = {'a', 'p', 'p', 'l', 'e', 's'};
    char ch1 = 'a';
    char ch2 = 'p';

    vector<char>* result = static_cast<vector<char>*>(ReplaceCharacter(str, ch1, ch2));
    if (result) {
        for (char c : *result) {
            cout << c; // Output: paales
        }
        cout << endl;
    }

    return 0;
}
