
#include <stdio.h>

int main()
{
    int sales[] = {100, 200, 150, 300, 250};
    int n = sizeof(sales) / sizeof(sales[0]);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += sales[i];
    }

    printf("Total Sales = %d\n", sum);
    return 0;
}
