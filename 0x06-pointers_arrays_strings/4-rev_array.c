#include <stdio.h>
#include <stdlib.h>

/**
 *
 *  function to reverse an array
 *
 *   I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
 *
 **/

void reverse_array(int *a, int n)

{

		int i = 0, b, tmp;
		for (b = n - 1; b > i; b--)
		{
			tmp = a[b];
			a[b] = a[i];
			a[i] = tmp;
			i++;
		}

}
