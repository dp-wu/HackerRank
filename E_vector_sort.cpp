/*
easy version of running median exercise, binary search + insertion sort
https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int>& bi_insertion_sort(vector<int> &vec, int e) {
    vector<int>::iterator it = vec.begin();
    
    int low = 0;
    int high = vec.size();
    int mid = (low + high) / 2;
    
    // find insertion index
    while (low < high) {
        if (vec[mid] < e) { low = mid+1; }
        else { high = mid; }
        mid = (low + high) / 2;
    }
    
    // insert into vector
    vec.insert(it+mid, e); 
    
    return vec;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    vector<int> v;
    cin >> n;
    
    // read in elements and sort the vector
    while (cin >> e) {
        if (v.empty()) { v.push_back(e); }
        else { bi_insertion_sort(v, e); }
    }
    
    // print sorted results
    for (int i=0; i<n; ++i) { cout << v[i] << " "; }
    
    return 0;
}
