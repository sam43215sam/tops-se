#include<stdio.h>

int main()
 {
    int limit, i, j, k;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d: ", limit);

    i = 0;
    j = 1;
    k = i + j;

    while(k <= limit) 
	{
        printf("%d ", k);
        i = j;
        j = k;
        k = i + j;
    }

    printf("\n");

    return 0;
}
