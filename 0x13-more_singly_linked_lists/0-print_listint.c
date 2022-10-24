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
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);

	return (len);
}
