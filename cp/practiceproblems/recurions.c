#include<stdio.h>
#include<math.h>


int mystery(int n, int k)
{
  int units = n % 10;
  int ans = pow(units, k);
  if (n > 10)
    ans += mystery(n / 10, k);
  return ans;
}

int main()
{
  int n = 153, k = 3;
  printf("%d\n", mystery(n, k));

  return 0;
}
