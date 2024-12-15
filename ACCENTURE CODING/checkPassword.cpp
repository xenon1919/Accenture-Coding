#include <iostream>
#include<cctype>
#include<vector>
#include<string>
using namespace std;

int checkPassword(const vector<char>& str) {
  int n = str.size();
  if(n < 4) {
    return 0;
  }
  if(isdigit(str[0])) {
    return 0;
  }
  bool hasDigit = false;
  bool hasUpperCase = false;
  
  for(int i = 0; i < n; ++i) {
    if(isdigit(str[i])) {
      hasDigit = true;
    }
    if(isupper(str[i])) {
      hasUpperCase = true;
    }
    if(isspace(str[i]) || str[i] == '/') {
      return 0;
    }
  }
    if(hasDigit && hasUpperCase) {
      return 1;
    }
    return 0;  
}


int main() 
{
   string input;
   getline(cin, input);
   vector<char> password(input.begin(), input.end());
   int result = checkPassword(password);
   if(result == 1) {
     cout << "Valid Password" << endl;
   }
   else {
     cout << "Invalid Password" << endl;
   }
    return 0;
}