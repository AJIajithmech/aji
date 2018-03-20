#include <stdio.h>
int main()
{
    int n, v, sum = 0;

    do {
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }
    while (n <= 0);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
