#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;


int main() {
	int participants, budget, hotels, weekEnds;
	int pricePerPerson;

	while(scanf("%d %d %d %d", &participants, &budget, &hotels, &weekEnds) != EOF) {
		int minCost = -1;

		while(hotels--) {
			bool canUse = false;
			scanf("%d", &pricePerPerson);
			int repeat = weekEnds;
			while(repeat--) {
				int avRooms;
				if(scanf("%d", &avRooms), (avRooms >= participants)) {
					canUse = true;
				}
			}
			if((canUse && minCost > (participants * pricePerPerson)) 
												|| minCost == -1 ) {
				minCost = participants * pricePerPerson;
			}
		}
		(minCost <= budget && minCost != -1) ? cout << minCost << endl : cout << "stay home" << endl;
	}
	return 0;
}