#include <stdio.h>
int main()
{
  char a;
  printf("Enter a character:");
  scanf("%c",&a);
  if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
    printf("Alphabet");
  else
    printf("Not an alphabet");
  return 0;
}
