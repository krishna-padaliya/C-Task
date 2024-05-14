#include <stdio.h>
void main() 
{
    int num, t1 = 0, t2 = 1, t3;

    printf("Enter Number:");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= num; i++) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        printf("%d", t1);
        printf(" ");
    }

}