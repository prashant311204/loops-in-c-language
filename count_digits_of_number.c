#include<stdio.h>
int main()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  int count=0;
  while(n>0)
  {
  n=n/10;
  count++;
  }
  printf("the number of digits are %d\n",count);

    return 0;
}