#include <stdio.h>

int main()
{
  int rows = 4;
  int num = 1;

  for (int i = 1; i <= rows; i++)
  {
    for (int s = 1; s <= rows - i; s++)
    {
      printf("   ");
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      printf("%2d ", num);
      num++;
    }
    printf("\n");
  }

  return 0;
}