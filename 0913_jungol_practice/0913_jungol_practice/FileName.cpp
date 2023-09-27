#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int isduplicate(int arr[], int n) {
	for (int i = 0; i < 6; i++) {
		if (arr[i] == n) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int key;
	int lotto[100][6];
	srand((int)time(NULL));
	int num;
	printf("수 입력 : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 6; j++) {
			key = rand() % 45 + 1;
			if (isduplicate(lotto[i], key)) {
				j -= 1;
				continue;
			}
			else {
				lotto[i][j] = key;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("< %d 번째 > \n", i + 1);
		for (int j = 0; j < 6; j++) {
			printf("%d ", lotto[i][j]);
		}
		printf("\n");
	}



	return 0;
}