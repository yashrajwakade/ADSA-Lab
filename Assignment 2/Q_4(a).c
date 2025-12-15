#include <stdio.h>

int main()
{
    int nums[] = {10, 23, 45, 60, 77};
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
            printf("%d is Even\n", nums[i]);
        else
            printf("%d is Odd\n", nums[i]);
    }

    return 0;
}
