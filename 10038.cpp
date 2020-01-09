#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>


using std::vector;

int main() {
	int numbers;
	int *sequencia;
	bool *naSequencia;

	while(scanf("%d", &numbers) != EOF) {
		bool isJolly = true;
		sequencia = (int*) malloc(sizeof(int) *numbers);
		naSequencia = (bool*) malloc(sizeof(bool) *numbers);

		for(int i = 0; i < numbers; i++) {
			scanf("%d", &sequencia[i]);
		}

		int value;
		for(int i = 0; i < numbers - 1; i++) {
			if(sequencia[i] < sequencia[i + 1]) {
				value = sequencia[i + 1] - sequencia[i];
			} else value = sequencia[i] - sequencia[i+1];
			if(value > 0 && value < numbers) {
				naSequencia[value] = true;
			}
		}

		for(int i = 1; i < numbers; i++) {
			if(!naSequencia[i]) {
				isJolly = false;
				break;
			}
		}

		if(isJolly) {
			printf("Jolly\n");
		} else printf("Not jolly\n");

	}
	return 0;
}