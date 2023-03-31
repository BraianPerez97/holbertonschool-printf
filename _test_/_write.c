#include "main.h"
/**
 * _write - custom write func
 * @c: format param
 * Return: write func in format
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
