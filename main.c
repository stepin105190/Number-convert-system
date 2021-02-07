#include<stdio.h>
#include<math.h>

#include "Conversions_Systems.h"
#include "test_conversions_systems.h"
int Binary_to_Decimal(long long n);
long Decimal_to_Binary(int n);
int Decimal_to_Octal(int decimal);
int Octal_to_Decimal(int octal);

int main()
{
long long binaryNumber;
int octalNumber=0,decimalNumber=0;
int operation;
long long n;
int decimal,octal;
long binary;
printf("Number Conversions systems\n");
printf("1.Binary to Decimal \n");
printf("2.Decimal to Binary\n");
printf("3.Decimal to Octal\n");
printf("4.Octal to Decimal\n");
printf("Enter the choice\n");
scanf("%d",&operation);

switch(operation)
{
case 1:
          printf("Enter the binary number\n");
          scanf("%d",&n);
          printf("The decimal number is %ld\n",Binary_to_Decimal(n));
          break;
case 2:
         printf("Enter the decimal number\n");
         scanf("%d",&decimal);
         printf("The equivalent decimal number is %ld\n",Decimal_to_Binary(decimal));
         break;
case 3:
         printf("Enter the decimal number\n");
         scanf("%d",&decimal);
         printf("The equivalent decimal number is %d\n",Decimal_to_Octal(decimal));
         break;
case 4:
          printf("Enter the octal number\n");
          scanf("%d",&octal);
          printf("The equivalent decimal number is %d",Octal_to_Decimal(octal));
          break;
default:
          printf("Invalid input\n");
          }
     return 0;
}
