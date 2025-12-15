

#include <stdio.h>

int main()
{
  int temp[] = {32, 36, 41, 39, 50};
  int n = sizeof(temp) / sizeof(temp[0]);

  int max = temp[0];
  for (int i = 1; i < n; i++)
  {
    if (temp[i] > max)
    {
      max = temp[i];
    }
  }
  printf("tempreture = %d\n", max);
  return 0;
}