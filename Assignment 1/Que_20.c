#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return binarySearch(arr, l, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int n, i, x, result;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}
