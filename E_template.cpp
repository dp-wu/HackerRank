/*
my original solution is not fast enough to pass all the test,
on discussion board user *flypixel* says to add a piece of code to increase the speed for cout,
now all test has passed.
https://www.hackerrank.com/challenges/c-class-templates/problem?isFullScreen=true
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements {
    private:
        T e;
    public:
        AddElements(T param): e(param) {}
        T add(T &param) { return e+param; }
        string concatenate(string &param) { return e+param; }
};


// the following 7 lines of code are found on the discussion board
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
#define endl '\n';
// code block end

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
