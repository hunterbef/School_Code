/*
Hunter Befort
1001181638
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define BITS 8

void convertDecimalToBinary(int value, char binary[]);

int main(void)
{
	char expression[3] = {};
	char binary[BITS + 1] = {};
	int var1 = -1, var2 = -1;

	printf("Bitwise Calculator\n\n");
	printf("Enter two base 10 values with a bitwise operator to see the decimal result and the binary result.  The format is\n\n");
	printf("FirstNumber BitwiseOperator SecondNumber\n\n");
	printf("For example, enter the expression \n\n");
	printf("2 & 3\n\n");
	printf("This calculator can used with &, |, ^, << and >>\n\n");
	printf("Please note that the spaces between numbers and operator is essential and the two entered values must be between 0 and 255\n\n");


	while(((var1 < 0) || (var1 > 255)) || ((var2 < 0) || (var2 > 255)))
	{
		printf("Enter expression: ");
		scanf("%d %s %d", &var1, expression, &var2);
		printf("\n");

		if (((var1 < 0) || (var1 > 255)) || ((var2 < 0) || (var2 > 255)))
		{
			printf("The entered expression contains out of range values.\nPlease reenter the expression using values between 0 and 255.\n\n");
		}
	} 

	if (expression[0] == '&')
	{
		printf("In base 10...\n\n");
		printf("%d %s %d = %d\n\n", var1, expression, var2, (var1 & var2));
		printf("\nIn 8-bit base 2...\n\n");
		convertDecimalToBinary(var1, binary);
		printf("  %s\n", binary);
		printf("%s\n", expression);
		convertDecimalToBinary(var2, binary);
		printf("  %s\n", binary);
		printf("  ========\n");
		convertDecimalToBinary((var1 & var2), binary);
		printf("  %s\n\n", binary);
	}
	else if (expression[0] == '|')
	{
		printf("In base 10...\n\n");
		printf("%d %s %d = %d\n\n", var1, expression, var2, (var1 | var2));
		printf("\nIn 8-bit base 2...\n\n");
		convertDecimalToBinary(var1, binary);
		printf("  %s\n", binary);
		printf("%s\n", expression);
		convertDecimalToBinary(var2, binary);
		printf("  %s\n", binary);
		printf("  ========\n");
		convertDecimalToBinary((var1 | var2), binary);
		printf("  %s\n\n", binary);
	}
	else if (expression[0] == '^')
	{
		printf("In base 10...\n\n");
		printf("%d %s %d = %d\n\n", var1, expression, var2, (var1 ^ var2));
		printf("\nIn 8-bit base 2...\n\n");
		convertDecimalToBinary(var1, binary);
		printf("  %s\n", binary);
		printf("%s\n", expression);
		convertDecimalToBinary(var2, binary);
		printf("  %s\n", binary);
		printf("  ========\n");
		convertDecimalToBinary((var1 ^ var2), binary);
		printf("  %s\n\n", binary);
	}
	else if (expression[0] == '>')
	{
		printf("In base 10...\n\n");
		printf("%d %s %d = %d\n\n", var1, expression, var2, (var1 >> var2));
		printf("\nIn 8-bit base 2...\n\n");
		convertDecimalToBinary(var1, binary);
		printf("%s  %s %d\n\n", binary, expression, var2);
		convertDecimalToBinary((var1 >> var2), binary);
		printf("%s\n\n", binary);
	}
	else if (expression[0] == '<')
	{
		printf("In base 10...\n\n");
		printf("%d %s %d = %d\n\n", var1, expression, var2, (var1 << var2));
		printf("\nIn 8-bit base 2...\n\n");
		convertDecimalToBinary(var1, binary);
		printf("%s  %s %d\n\n", binary, expression, var2);
		convertDecimalToBinary((var1 << var2), binary);
		printf("%s\n\n", binary);
	}
	else
	{
		printf("\nOperator %s is not supported by this calculator\n\n", expression);
	}


	return 0;
}

void convertDecimalToBinary(int value, char binary[])
{
	int decimal[BITS + 1] = {};
	int i;
	int finder = value;

	for (i = BITS; i > 0; i--) 
	{
		decimal[i] = finder;

		if ((decimal[i] % 2) == 1)
		{
			binary[i - 1] = '1';
		}
		else
		{
			binary[i - 1] = '0';
		}

		finder >>= 1;
	}
}