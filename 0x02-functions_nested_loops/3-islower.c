#include "main.h"

/**
 *  _islower - Check for lowercase character
 *  @z: Character to be checked
 *  Return: 1 for lowercase letters 0 otherwise
 */

int _islower(int z)
{

	if (z >= 97 && z <= 122)
	{

	return (1);
	}
	return (0);
}
