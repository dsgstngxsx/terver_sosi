#include <stdio.h>

int main() {
	int b = 0;
	int q = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int n = 0; n < 10; n++) {
					for (int m = 0; m < 10; m++)
					{
						int a[10] = { 0 };
						a[i]++;
						a[j]++;
						a[k]++;
						a[n]++;
						a[m]++;

						int s = 0;
						for (int q = 0; q < 10; q++)
						{
							if (a[q] != 0)
								s++;
						}

						if ((i == n && i == j && i == k && i == m) || 
							(a[i] > 3 || a[j] > 3 || a[k] > 3 || a[n] > 3 || a[m] > 3) || 
							(a[i] == 3 && (a[j] < 2 || a[k] < 2 || a[n] < 2 || a[m] < 2)) ||
							(a[j] == 3 && (a[i] < 2 || a[k] < 2 || a[n] < 2 || a[m] < 2)) ||
							(a[k] == 3 && (a[j] < 2 || a[i] < 2 || a[n] < 2 || a[m] < 2)) ||
							(a[n] == 3 && (a[j] < 2 || a[k] < 2 || a[i] < 2 || a[m] < 2)) ||
							(a[m] == 3 && (a[j] < 2 || a[k] < 2 || a[n] < 2 || a[i] < 2)) ||
							(a[i] == 1 && (a[j] < 2 || a[k] < 2 || a[n] < 2 || a[m] < 2)) ||
							(a[j] == 1 && (a[i] < 2 || a[k] < 2 || a[n] < 2 || a[m] < 2)) ||
							(a[k] == 1 && (a[j] < 2 || a[i] < 2 || a[n] < 2 || a[m] < 2)) ||
							(a[n] == 1 && (a[j] < 2 || a[k] < 2 || a[i] < 2 || a[m] < 2)) ||
							(a[m] == 1 && (a[j] < 2 || a[k] < 2 || a[n] < 2 || a[i] < 2)) || (2 > s) || (s > 3))

							/*(a[i] == 2 && (a[j]<2  a[k]<2  a[n]<2  a[m]<2))
							(a[j] == 2 && (a[i]<2  a[k]<2  a[n]<2  a[m]<2))
							(a[k] == 2 && (a[j]<2  a[i]<2  a[n]<2  a[m]<2))
							(a[n] == 2 && (a[j]<2  a[k]<2  a[i]<2  a[m]<2))
							(a[m] == 2 && (a[j]<2  a[k]<2  a[n]<2 || a[i]<2)) ||*/

						{
							continue;
						}
						else
						{
							b++;
							
							//printf("%d%d%d%d%d\n", i, j, k, n, m);
	
							if (a[1] == 2)
							{
								q++;
								printf("%d%d%d%d%d\n", i, j, k, n, m);


							}
							
						}

					}

				}

			}
		}

	}

	printf("\n m=%d", q);
	return 0;
}
