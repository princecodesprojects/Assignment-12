#include<stdio.h>
#include<conio.h>
void printReverse(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printReverse( n);
    return 0;
}

void printReverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        printReverse(n/10);
    }
}