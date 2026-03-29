#include<stdio.h>
#include<math.h>




int main()
{
  int i=1,j=1,count=0;
  while (i<=5)
  {
    count++;
    while (j<=5)
    {
      j++;
      switch (j)
      {
      case 4:
        j++;
        break;
      }
      j++;

    }
    if (j==6)
    {
      break;
    }
    i++;
    
  }

  printf("i= %d, j= %d", i,j);
  printf("count = %d\n", count);
  
  return 0;
}
