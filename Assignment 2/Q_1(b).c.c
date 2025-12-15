#include <stdio.h>

int sumRecursive(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + sumRecursive(arr, n - 1);
}

int main()
{
    int sales[] = {100, 200, 150, 300, 250};
    int n = sizeof(sales) / sizeof(sales[0]);

    int total = sumRecursive(sales, n);

    printf("Total Sales = %d\n", total);
    return 0;
}
