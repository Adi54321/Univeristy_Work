#include <stdio.h>
int main() {

    int num1;
    int num2;
    int sum;
    int sub,multiply,divided;
  
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
  
    sum=num1+num2;
    sub=num1-num2;
    multiply=num1*num2;
    divided=num1/num2;
    printf("Sum of the entered numbers: %d\n",sum);
    printf("Subtract of the entered numbers: %d\n",sub);
    printf("Multiply of the entered numbers: %d\n",multiply);
    printf("Division of the entered numbers: %d\n",divided);
  return 0;
}