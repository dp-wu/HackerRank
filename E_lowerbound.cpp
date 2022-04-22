/*
STL review, lower_bound()
https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q, X, Y;
    vector<int> v;
    
    cin >> N;
    for (int i=0; i<N; ++i) {
        cin >> X;
        v.push_back(X);
    }
    
    cin >> Q;
    for (int i=0; i<Q; ++i) {
        cin >> Y;
        vector<int>::iterator it = lower_bound(v.begin(), v.end(), Y);
        if (*it == Y) { cout << "Yes" << " " << it-v.begin()+1 << endl; }
        else { cout << "No" << " " << it-v.begin()+1 << endl;}
    }
     
    return 0;
}
