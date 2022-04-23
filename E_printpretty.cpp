/*
this is a very annoying exercise. :/
I was overthinking too much about the truncating part.
https://www.hackerrank.com/challenges/prettyprint/problem?isFullScreen=true
*/
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        long a = static_cast<long>(A);
        cout << hex << showbase << nouppercase << left << a << endl;
        cout << dec << fixed << setprecision(2) << setfill('_') << setw(15) << right << showpos << B << endl;
        cout << uppercase << noshowpos << setprecision(9) << scientific << C << endl;
	}
	return 0;

}
