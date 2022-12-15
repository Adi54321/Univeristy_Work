#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
  
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
  
    sum=num1+num2;
    printf("---------------------------------\n");
    printf("|                               |\n");
    printf("|\t%d + %d = %d\t\t|\n",num1,num2,sum);
    printf("|                               |\n");
    printf("---------------------------------");

return 0;
}