#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
int a=0;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        a=1;
        break;
    }
}
    if(a==0)
    {
        printf(" prime number");
    }
   else
   {
    printf("composite number");
   }

    return 0;
}