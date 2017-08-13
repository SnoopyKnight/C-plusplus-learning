#include <stdio.h>


int main(){
	int i, j, n, count;
	int t, k, max;
	while (scanf("%d %d", &i, &j) == 2)
	{
		if (i>j){
			t = i;
			i = j;
			j = t;
		}
		for (k = i; k <= j; k++){
			count = 1;
			n = i;
			while (n != i){
				n = n % 2 ? 3 * n + 1 : n / 2;
				count++;
			}
			max = count > max ? count : max;
		}
		printf("%d %d %d", &i, &j, &max);
	}
	return 0;
}