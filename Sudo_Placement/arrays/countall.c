//You are given an integer 	N and you need to find for all i, where 1<=i<=N, count of no of special elements in array A
// X wiil be a special element is for Y, iff Y is a multiple of X

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	
	// Read N
	scanf("%d", &n);

	int arr[n];

	// Read the array
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	// Have an array to store the count of each i < N
	int *count = calloc(n, sizeof *count);

	for (int i = 0; i < n; i++) {
		// For each element find its factors and accordingly increment the corresponding special element count
		for (int j = 1; j <= sqrt(arr[i]); j++) {
			if (arr[i] % j == 0) {
				if (j == (arr[i] / j)) {
					count[j - 1]++;
				}
				else {
					count[j - 1]++;
					if ((arr[i] / j) <= n) {
						count[(arr[i] / j) - 1]++;
					}
				}
			}
		}
	}

	int sum = 0;
	// Sum the counts
	for (int i = 0; i < n; i++) {
		sum += count[i];
	}

	printf("%d\n", sum);
	
	free(count);
	return 0;
}

