#include <stdio.h>
#include <stdlib.h>

/**
 *
 * Always look up
 *
 * a function that changes all lowercase letters of a string to uppercase.
 * 
 **/

char *string_toupper(char *strs)

{

		int a;
		for (a = 0; strs[a] != '\0'; a++)
		{
			if (strs[a] >= 'a' && strs[a] <= 'z')
			{
				strs[a] = strs[a] - 32;
			}

		}
		
		return (strs);

}
