/*
first time using stringstream, it is pretty simple once I get used to how streams work.
https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
*/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> vec;
    stringstream ss(str);
    int num;
    char ch;
    
    while (1) {
        ss >> num;
        vec.push_back(num);
        if (!(ss >> ch)) break;
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
