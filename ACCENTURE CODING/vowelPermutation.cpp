#include <iostream>
#include <string>
using namespace std;
int vowelPermutation(const string& input1) {
    int consonants = 0;
    for(char c : input1) {
        if(tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            consonants++;
        }
    }
    if(consonants == 0) {
        return 0;
    }
    int factorial = 1;
    for(int i = 2; i <= consonants; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    string input = "hello";
    int result = vowelPermutation(input);
    cout  << result << endl;
    return 0;
}