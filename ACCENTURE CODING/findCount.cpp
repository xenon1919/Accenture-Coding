#include<bits/stdc++.h>
using namespace std;

int findCount(const vector<int>& arr, int num, int diff) {
  int count = 0;
  for(auto value : arr) {
    if(abs(value - num) <= diff) {
      count++;
    }
  }
  return (count > 0) ? count : -1;
}

int main() {
  int length;
  cin >> length;
  
  vector<int> arr(length);
  for(int i = 0; i < length; ++i) {
    cin >> arr[i];
  }
  int num, diff;
  cin >> num;
  cin >> diff;
  
  int result = findCount(arr, num, diff);
    if(result == -1) {
      cout << "No elements found with the given difference condition." << endl;
    }
    else {
      cout << result; 
    }
  return 0;
}