#include<stdio.h>

int main()
{
    int i, n, count = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Factors are:\n");

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }

    printf("Total count of factors = %d\n", count);

    return 0;
}
