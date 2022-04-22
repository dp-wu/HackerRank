/*
This is a 50.0 score solution for running median problem on hackerrank:
https://www.hackerrank.com/challenges/find-the-running-median/problem
Score:50.00 Status:Accepted
*/

#include <iostream>
#include <vector>
using namespace std;


vector<double> runningMedian(vector<int> a) {
    vector<double> medians; // list of medians
    vector<int> ordered; // ordered list
    vector<int>::iterator it = ordered.begin();

    for (int i=0; i<a.size(); ++i) {
        if (i == 0) {
            ordered.push_back(a[i]);
            medians.push_back(a[i]*1.0);
        }
        else {
            // binary search
            int low = 0;
            int high = ordered.size();
            int mid = (low+high) / 2;
            while (low < high) {
                if (a[i] < ordered[mid]) { high = mid; }
                else { low = mid+1; }
                mid = (low+high) / 2;
            }
            // insertion sort
            it = ordered.begin() + mid;
            ordered.insert(it, a[i]);

            // compute current median
            int med = ordered.size() / 2;
            if (ordered.size()%2 == 0) { medians.push_back((ordered[med-1]+ordered[med])/2.0); }
            else { medians.push_back(ordered[med]*1.0); }
        }
    }

    return medians;
}


int main() {
    // customized test case
    vector<int> v = {1, 2, 3, 4, 5};
    vector<double> result = runningMedian(v);
    for (double i : result) {
        cout << i;
    }
    cout << endl;
    return 0;
}
