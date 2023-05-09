#include<stdio.h>

int main() 
{
    int dayNum;
    char dayName;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &dayNum);

    switch(dayNum) {
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default:
            printf("Error: Invalid input\n");
            return 1;
    }

    printf("The corresponding day is %s\n", dayName);

    return 0;
}
