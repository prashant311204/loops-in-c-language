#include<stdio.h>
int main()
{
  int n,rem;
  printf("enter the number\n");
  scanf("%d",&n);
  int sum=0;
  while(n>0)
  {

    
    rem=n%10;
    n=n/10;
    sum=sum+n;
     
  }  
  printf("the sum of digits are %d\n",sum);

    return 0;
}