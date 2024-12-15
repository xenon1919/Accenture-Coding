#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxSequence(const vector<int> &input1,  int input2) {
    int c = 1;
    int q = 0;
    for(int i = 1; i < input2; ++i) {
        if(input1[i] < input1[i - 1]) {
            c++;
        }
        else {
            if(c >= 3) {
                 q = max(q, c);
            }
            c = 1;
        }
    }
    if(c >= 3) {
        q = max(q, c);
    }
    return q;
}

int main() {
    vector<int> input1 = {5,4,3,6,5,4,3,2,1};
    int input2 = input1.size();
    cout << findMaxSequence(input1, input2) <<endl;
    return 0;
}