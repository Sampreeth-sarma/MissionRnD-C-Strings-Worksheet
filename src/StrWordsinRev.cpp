/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
#include<malloc.h>
void reverse(char *, int, int);
void swap(char *, int, int);

void str_words_in_rev(char *input, int len)
{
	int i = 0, sp = 0, j, loop;

	loop = len / 2;
	while (input[i] != '\0')
	{
		if (input[i] == ' ')
			sp++;
		i++;
	}
	if (sp > 0)
	{
		sp = 0;
		for (i = 0, j = len - 1; i < loop; i++, j--)
		{

			swap(input, i, j);

		}
		
		for (i = 0; i <= len; i++)
		{

			if (input[i] == ' '||input[i]=='\0')
			{
				if (sp == 0){
					reverse(input, 0, i - 1);
					sp = i + 1;


				}
				else{
					reverse(input, sp, i - 1);
					sp = i + 1;

				}
			}
		}
	}
}
void swap(char * input, int char1, int char2)
{

	char temp = input[char1];
	input[char1] = input[char2];
	input[char2] = temp;

}
void reverse(char *input, int start, int end)
{
	int i, loop, j = 0;


	loop = (start + end) / 2;

	for (i = start; i <= loop; i++)
	{

		swap(input, i, end - j);
		j++;
	}
}