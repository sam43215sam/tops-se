#include<stdio.h>

int main() 
{
    int num, even = 0, odd = 0;
    int i;

    for(i = 1; i <= 10; i++)
	 {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 == 0)
		 {
            even++;
        }
		 else 
		{
            odd++;
        }
    }

    printf("You entered %d even numbers and %d odd numbers\n", even, odd);

    return 0;
}
