#include <stdio.h>
int main()
{
  int m,n,i;
  int sum=0;
  scanf("%d",&n);
  scanf("%d",&m);
  for(i=0;i<=m;i++)
  {
    sum=sum+i;
  }
  printf("The sum is %d",sum);
  return 0;
}
