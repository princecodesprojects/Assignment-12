#include<stdio.h>
#include<conio.h>
void decimalToBinary(int n);
int main()
{
    int n;
    printf("Enter a number to get its binary equivalent\n");
    scanf("%d",&n);
    decimalToBinary( n);
    return 0;
}

void decimalToBinary(int n)
{
    if(n>0)
    {
      decimalToBinary(n/2);
      printf("%d",n%2);  
    }
}