/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<malloc.h>
void rev(char *, int, int);

void number_to_str(float num, char *str, int afterdecimal){

	float num1 = num; int left_count = 0, right_count = 0;
	while (num1>1 || num1<-1)
	{
		num1 = num1 / 10;
		left_count++;
	}

	num1 = num;
	while (1)
	{
		if (num1 == (int)num1)
			break;
		else{
			num1 = num1 * 10;
			right_count++;
		}

	}


	int number = (int)num1, number1 = (int)num1, i = 0;

	while (number1 >= 1 || number1 <= -1)
	{
		if (i != right_count){

			if (num>0)
				str[i++] = (char)((number1 % 10) + 48);
			else
				str[i++] = (char)(48 - (number1 % 10));


			number1 /= 10;
		}
		else if (i == right_count)

		{
			if (right_count == 0)
				i++;
			else
				str[i++] = '.';
		}

	}
	if (num < 0)
	{
		str[i++] = '-';
	}

	int loop = i / 2; int k, j;
	for (k = 0, j = i - 1; k < loop; k++, j--)
	{

		rev(str, k, j);

	}



}
void rev(char * str, int char1, int char2)
{

	char temp = str[char1];
	str[char1] = str[char2];
	str[char2] = temp;

}

	