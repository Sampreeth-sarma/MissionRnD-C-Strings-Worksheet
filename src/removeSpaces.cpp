/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdlib.h>
char removeSpaces(char *str) {
	int len = 0;
	if (str == '\0')
	{
		return '\0';
	}
	else
	{
		
		
			for (int i = 0;str[i]!='\0'; i++)
			{
				if (str[i] != ' ')
					str[len++] = str[i];
				else
					continue;
					
			}
			str[len] = '\0';
			
	}
}