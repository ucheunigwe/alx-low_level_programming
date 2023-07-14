#include <string.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _calloc - Entry point
 *
 * @size: size of Array to be created
 * @nmemb: size of Array to be created
 *
 * Return: Always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	return (calloc(nmemb, size));
}
