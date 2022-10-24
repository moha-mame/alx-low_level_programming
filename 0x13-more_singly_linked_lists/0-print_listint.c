#include "lists.h"

/**
 * print_listint - prints a listint with newlines between
 *
 * @h: head of list to print
 *
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{

	if (h)
	{
		if (h->str)
			printf("[%d] %s%s", h->len, h->str, "\n");
		else
			printf("[%d] %s%s", 0, "(nil)", "\n");
		if (h->next)
		{
			return (1 + print_list(h->next));
		}
		return (1);
	}
	return (0);
}
}
