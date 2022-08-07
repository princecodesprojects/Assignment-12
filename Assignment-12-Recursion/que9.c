#include<stdio.h>
#include<conio.h>
void decimalToOctal(int n);
int main()
{
    int n;
    printf("Enter a number to gets its equivalent octal number\n");
    scanf("%d",&n);
    decimalToOctal(n);
    return 0;
}

void decimalToOctal(int n)
{
    if(n>0)
    {
        decimalToOctal(n/8);
        printf("%d",n%8);
    }
}