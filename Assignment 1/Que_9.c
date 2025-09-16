#include <stdio.h>
int main()
{
    int n, temp, rev = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    if (temp == rev)
        printf("%d is Palindrome\n", temp);
    else
        printf("%d is Not Palindrome\n", temp);
    return 0;
}
