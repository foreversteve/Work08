#include "sieve.h"

void check_multiples(int bucket[], int size, int n){
	for (int i = n*2; i < size; i+=n){
		if (!bucket[i]){
			bucket[i]+=1;
		}
	}
}
int sieve(int num){
	int size = (int)(num*log(num)*1.15);
	int *bucket = calloc(sizeof(int),size);

	//check_multiples(bucket,size,2);
	int counter = 0;
	//printf("%d\n",size);
	for (int i = 2; i < size; i++){
		if (! bucket[i]){
			counter+=1;
			if (counter == num){
				return i;
			}
			check_multiples(bucket,size,i);
		}
		
		//counter+=1;
	}
	//printf("%d\n",bucket[50]);
	free(bucket);
	return -1;
}
