#include<stdio.h>
int fact(int n)
{
    if (n>0)
    return(n*fact(n-1));
    return(1);
}
void main()
{int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
   b=fact(a);
   printf("The factorial of the number is %d :",b);

}