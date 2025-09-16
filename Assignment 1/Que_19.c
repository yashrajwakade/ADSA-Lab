#include <stdio.h>
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumDigits(n));
    return 0;
}
