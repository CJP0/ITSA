#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int list[7] = { 2000000,200,1000,4000,10000,40000,200000 }, n, num[4], in, record[7] = { 0 }, temp, t, j;
	for (int i = 0; i < 4; i++) scanf("%d", &num[i]);
	scanf("%d", &n);
	long long sum = 0;
	while (n--) {
		scanf("%d", &in);
		if (in == num[0]) {
			record[0]++;
			continue;
		}
		else {
			temp = 0;
			for (int i = 1; i < 4; i++) {
				if (num[i] % 1000 == in % 1000) {
					for (j = 4; j < 9; j++) {
						t = pow(10, j);
						if ((num[i] % t) != (in%t)) {
							break;
						}
					}
					j--;
					if (j > temp) temp = j;
				}
			}
			temp -= 2;
			if (temp > 0) record[temp]++;
		}
	}
	printf("%d", record[0]);
	for (int i = 6; i >= 0; i--) {
		if (i) printf(" %d", record[i]);
		sum += record[i] * list[i];
	}
	puts("");
	printf("%lld\n", sum);
}