#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main () {
	int repeat;
	while(cin >> repeat, (repeat != 0)){
		int divX, divY;
		cin >> divX >> divY;

		while(repeat--) {
			int x,y;
			cin >> x >> y;
			if(x == divX || y == divY) cout << "divisa" << endl;
			else if(x > divX && y > divY) cout << "NE" << endl;
			else if(x > divX && y < divY) cout << "SE" << endl;
			else if(x < divX && y > divY) cout << "NO" << endl;
			else  cout << "SO" << endl;
		}
	}
}