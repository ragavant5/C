#include <stdio.h>
int main()
{
  char a,lc,lu;
  scanf("%c",&a);
  lc=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
  lu=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
  if(lc || lu)
    printf("yes");
  else
    printf("no");
  return 0;
}
