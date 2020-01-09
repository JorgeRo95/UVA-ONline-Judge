#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	int tests, caseTest = 0;
	cin >> tests;

	while (tests--) {
		int scaryBeing, maxSpeed = 0;
		cin >> scaryBeing;
		while(scaryBeing--) {
			int speed;
			if(scanf("%d", &speed), speed > maxSpeed)
				maxSpeed = speed;
		}

		printf("Case %d: %d\n", ++caseTest, maxSpeed);
	}
}