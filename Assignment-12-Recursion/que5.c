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
        printN(n-1);
        printf("%d ",n*2);
    }
}