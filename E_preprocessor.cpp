/*
I had absolutely no idea how to define function? macros.
I think I kinda get it now, good knowledge check.
https://www.hackerrank.com/challenges/preprocessor-solution/problem?isFullScreen=true
*/
/* Enter your macros here */
#define toStr(s) #s
#define io(vec) cin >> vec
#define FUNCTION(name, op) inline void name(int &a, int &b) { (a op b)? (a = a): (a = b); }
#define INF 100000000
#define foreach(vec, item) for (int item=0; item<vec.size(); ++item)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
