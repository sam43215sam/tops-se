#include<stdio.h>

int main()
 {
    int choice;
    float value;
	float  result;

    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the number of years: ");
            scanf("%f", &value);
            result = value * 365.25;
            printf("%.2f years is equal to %.2f days\n", value, result);
            break;
        case 2:
            printf("Enter the number of days: ");
            scanf("%f", &value);
            result = value / 365.25;
            printf("%.2f days is equal to %.2f years\n", value, result);
            break;
        default:
            printf("Error: Invalid choice\n");
            return 1;
    }

    return 0;
}
