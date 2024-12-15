#include <iostream>
#include <string>
using namespace std;

int OperationsBinaryString(const string& s) {
  if(s.empty()) {
    return -1;
  }
  
  int result = s[0] -'0';
  for(auto i = 0; i < s.size(); i += 2) {
   char op = s[i];
   int nextNum = s[i + 1] - '0';
   if(op == 'A') {
     result &= nextNum;
   }
   else if(op == 'B') {
     result |= nextNum;
   }
   else if(op == 'C') {
     result ^= nextNum;
   }
  }
  
  return result;
}

int main() {
  string s;
  cin >> s;
  cout << OperationsBinaryString(s) << endl;
   
    return 0;
}
