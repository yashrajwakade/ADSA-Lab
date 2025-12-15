#include <stdio.h>
#include <string.h>

int main()
{
    char username[] = "Yashraj";
    int left = 0;
    int right = strlen(username) - 1;
    char temp;

    while (left < right)
    {
        // swap characters
        temp = username[left];
        username[left] = username[right];
        username[right] = temp;

        left++;
        right--;
    }

    printf("Reversed Username (In-place) = %s\n", username);
    return 0;
}
