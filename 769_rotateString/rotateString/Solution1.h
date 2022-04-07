#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool rotateString(char * s, char * goal)
{
	if (strlen(s) != strlen(goal))
	{
		return false;
	}

	char* newS = (char*)malloc(sizeof(char)*(strlen(s) * 2 + 2));
	strcpy(newS, s);
	strcat(newS, s);	//Æ´½Ó

	for (int i = 0; i < strlen(s);i++)
	{
		if (s[i] == goal[0])
		{
			bool isMatch = true;
			for (int j = 1; j < strlen(goal);j++)
			{
				if (newS[i+j] != goal[j])
				{
					isMatch = false;
					break;
				}
			}
			if (isMatch)
			{
				return true;
			}
		}
	}
	return false;
}