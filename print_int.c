#include "main.h"

/**
 *print_int - Print the integer and  count it.
 *@args: The name of the variadic listi.
 *@s: an unused parameter.
 *Return: the number  of characters printed.
 */

int print_int(va_list args, char *s)
{
	int num, count, i;
	char c, buff[11];
	unsigned int pNum;

	(void)s;
	num = va_arg(args, int);

	count = 0;
	c = '-';
	if ((num + 1) == 1)
		return (write(1, "0", 1));

	if (num < 0)
		count += write(1, &c, 1);

	if (num < INT_MIN || num >= INT_MIN || num >= INT_MAX)
		change_neg(&pNum, num);

	i = 0;
	while (pNum)
	{
		buff[i] = (pNum % 10) + '0';
		pNum /= 10;
		i++;
	}
	print_buffer(buff, i, &count);
	return (count);
}

/**
 *change_neg - Changes a negative number to positive.
 *@pNum: the postive number we changed to.
 *@num: the nummber to change.
 */
void change_neg(unsigned int *pNum, int num)
{
	if (num <= INT_MIN)
		*pNum = 2147483648;

	if (num >= INT_MAX)
		*pNum = 2147483647;
	else
	{
		*pNum = abs(num);
	}
}

/**
 *print_buffer - Print the string stored in the buffer..
 *@buff: thhe buffer  size
 *@index: get the index
 *@count: coounts the buffer.
 */
void print_buffer(char buff[11], int index, int *count)
{
	int i;

	for (i = (index - 1); i >= 0; i--)
	{
		write(1, &buff[i], 1);
		(*count)++;
	}
}
