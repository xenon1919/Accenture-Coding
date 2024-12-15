#include<bits/stdc++.h>
using namespace std;

int differenceOfSum(int n, int m) {
  int sumDivisible = 0;
  int sumNotDivisible = 0;
  
  for(int i = 1; i <=; ++i) {
    if(i % n == 0) {
      sumDivisible += i;
    }
    else {
      sumNotDivisible += i;
    }
  }
  return sumNotDivisible - sumDivisible;
}

int main() {
  int n, m;
  cin >> n >> m;
  int result = differenceOfSum(n, m);
  cout << result << endl;
  
  return 0;
}