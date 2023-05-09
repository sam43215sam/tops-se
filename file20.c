#include<stdio.h>

int main() 
{
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) 
	{
        printf("Error: Factorial of negative number does not exist\n");
    } else {
        for(i = 1; i <= num; i++)
		 {
            factorial *= i;
        }
        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}
