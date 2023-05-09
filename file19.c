#include<stdio.h>

int main()
 {
    int num, i, even_sum = 0, odd_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
    for(i = 1; i <= 10; i++)
	 {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    printf("Sum of even numbers: ");
    for(i = 1; i <= num; i++) {
        if(i % 2 == 0) 
		{
            even_sum += i;
        }
    }
    printf("%d\n", even_sum);

    printf("Sum of odd numbers: ");
    for(i = 1; i <= num; i++)
	 {
        if(i % 2 != 0)
		 {
            odd_sum += i;
        }
    }
    printf("%d\n", odd_sum);

    return 0;
}
