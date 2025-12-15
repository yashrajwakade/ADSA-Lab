#include <stdio.h>
#include <string.h>

int main()
{
    char username[] = "Yashraj";
    int n = strlen(username);
    char reversed[100]; // large enough buffer

    for (int i = 0; i < n; i++)
    {
        reversed[i] = username[n - 1 - i];
    }
    reversed[n] = '\0'; // null terminate

    printf("Reversed Username (New Array) = %s\n", reversed);
    return 0;
}
