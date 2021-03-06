/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
char KthIndexFromEnd(char *str, int K)
{
	if (str == NULL)
		return '\0';
	else if (str == "")
		return '\0';
	else if (K < 0)
		return '\0';
	else if (str != "")
	{
		int len = 0;
		while (str[len] != '\0')
			len++;
		if (K > len)
			return '\0';
		else if (len == 0)
			return '\0';


		else
			return str[len - K - 1];

	}
		
}