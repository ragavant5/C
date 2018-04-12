#include<stdio.h>
int main()
{
  double no;
  printf("Enter a no.:");
  scanf("%d",&no);
  if(no>0.0)
    printf("The number %d is positive",no);
  if(no<0.0)
    printf("The number %d is negative",no);
  if(no==0.0)
    printf("Zero");
}
           
          
