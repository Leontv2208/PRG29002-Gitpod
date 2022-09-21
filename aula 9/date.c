#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter date(dd/mm/yyyy): ");
    scanf("%d,%d,%d", &day , &month , &year);

    switch (month){
        case 1: printf("Jan"); break;
        case 2: printf("Jan"); break;
        case 3: printf("Jan"); break;
        case 4: printf("Jan"); break;
        case 5: printf("Jan"); break;
        case 6: printf("Jan"); break;
        case 7: printf("Jan"); break;
        case 8: printf("Jan"); break;
        case 9: printf("Jan"); break;
        case 10: printf("Jan"); break;
        case 11: printf("Jan"); break;
        case 12: printf("Jan"); break;
}
    switch (day) {
    case 1:
    case 21:
    case 31:
        printf("st"); break;
    case 2:
    case 22:
        printf("nd"); break;
    case 3:
    case 23:
        printf("rd"); break;
    default:
        printf("th"); break;
    }
    



return 0;
}