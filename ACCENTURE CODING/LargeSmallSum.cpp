#include<bits/stdc++.h>
using namespace std;

int LargeSmallSum(const vector<int>& arr) {
  if(arr.empty() || arr.size() < 3) {
    return 0;
  }
  
  vector<int> evenElements;
  vector<int> oddElements;
  
  for(auto i = 0; i < arr.size(); ++i) {
    if(i % 2 == 0) {
      evenElements.push_back(arr[i]);
    }
    else {
      oddElements.push_back(arr[i]);
    }
  }
  
  sort(evenElements.begin(), evenElements.end());
  sort(oddElements.begin(), oddElements.end());
  
  if(evenElements.size() < 2 || oddElements.size() < 2) {
    return 0;
  }
  
  int secondLargetEven = evenElements[evenElements.size() - 2];
  int secondSmallestOdd = oddElements[1];
  
  return secondLargetEven + secondSmallestOdd;
}


int main() {
    vector<int> arr = {3, 2, 1, 7, 5, 4};
    int result = LargeSmallSum(arr);
    cout << "Output: " << result << endl;  

    return 0;
}