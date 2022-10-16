#include <stdio.h>
int main() {
 int num1, num2,result;
 printf("Enter 1st integers: ");
 scanf("%d", &num1);
 printf("Enter 2nd integers: ");
 scanf("%d", &num2);
 //calculate  addition
 result = num1 + num2;
printf("\n%d + %d = %d ", num1, num2, result);
 //calculate  subtraction
result = num1 - num2;
printf("\n%d - %d = %d", num1, num2, result);
 //calculate  multiplication
result = num1 * num2;
printf("\n%d * %d = %d", num1, num2, result);
 //calculate  division
result = num1 / num2;
printf("\n%d / %d = %d", num1, num2, result);
}
