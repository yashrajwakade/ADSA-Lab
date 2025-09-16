#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strchr("aeiouAEIOU", str[i]))
            count++;
    }
    printf("Number of vowels = %d\n", count);
    return 0;
}
