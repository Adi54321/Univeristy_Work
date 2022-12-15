#include <stdio.h>
int main() {
    int num1;
    int num2;
    int sum;
    char myName[]="Adi Naeem";
    int Student_ID=11073413;
    printf("%s,\n%d,\n",myName,Student_ID);
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
  
    sum=num1+num2;
  
    return 0;
}