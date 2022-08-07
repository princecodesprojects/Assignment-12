#include<stdio.h>
#include<conio.h>
void printN(int n);
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
printN( n);
return 0;
}

void printN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        printN(n-1);
    }
}