#include <iostream>
using namespace std;
int main() {
	int tests, a, b;
	cin >> tests;
	while(tests--) {
		cin >> a >> b;
		if(a == b) cout << "=" << endl;
		else if(a > b) cout << ">" << endl;
		else cout << "<" << endl;
	}
}