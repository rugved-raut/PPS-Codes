/*PRN: 24030331378020
Name: Rugved rupesh raut
 Title: Calculator
 Date: 
 */

#include<stdio.h>
int main()
{
int num1,sum,sub,multi;
float num2,div;
printf("Enter first number:\t");
scanf("%d",&num1);
printf("\nEnter second number:\t");
scanf("%f",&num2);

sum = num1+num2;
sub = num1-num2;
multi = num1*num2;
div = num1/num2;

printf("\nAddtion:\t%d",sum);
printf("\nSubstraction:\t%d",sub);
printf("\nMultiplication:\t%d",multi);printf("\nDivision:\t%f",div);
return 0;
}
	
