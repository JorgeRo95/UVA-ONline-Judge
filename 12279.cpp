#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
	int events, isTreat, caseNumber = 1;
	while (scanf("%d", &events), events) {
		int repeat =  events, number;
		isTreat = 0;
		while(repeat--){
			if(scanf("%d", &number), number == 0)
				isTreat++;
		}
		printf("Case %d: %d\n", caseNumber++, events - (isTreat*2));
	}
}