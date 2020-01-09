#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main () {
	int repeat;
	int caseNum = 0;
	cin >> repeat;
		while(repeat--) {
			long int values[3];
			cin >> values[0] >> values[1] >> values[2];
			for(int j = 2; j > 0 ; j--)
				for(int i = 0; i < 2; i++)
					if(values[i] > values[i + 1]){
						int aux;
						aux = values[i];
						values[i] = values [i + 1];
						values[i + 1] = aux;
					}
			printf("Case %d: %d\n",++caseNum, values[1]);
		}

}